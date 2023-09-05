#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * close_file - closes an open file
 * @fd: file descriptor for the open file
 * Return: void, exit the program on error
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to close file; fd %d\n", fd);
		exit(98);
	}
}

/**
 * check_filetype - checks if file is of elf type
 * @fd: file descriptor for the file
 * Return: 0(success), exit program on error
 */
void check_filetype(int fd)
{
	char ref[4] = {0x7f, 0x45, 0x4c, 0x46};
	char hdr_tmp[4];
	int rd, cmp;

	rd = read(fd, &hdr_tmp, sizeof(char) * 4);

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error, Unable to read from the file; fd %d\n", fd);
		close_file(fd);
		exit(98);
	}
	lseek(fd, 0, SEEK_SET);
	cmp = memcmp(&hdr_tmp, &ref, sizeof(char) * 4);

	if (cmp != 0)
	{
		dprintf(STDERR_FILENO, "Error: Invalid filetype\n");
		close_file(fd);
		exit(98);
	}
}

/**
 * print_magic - prints the magic number of an elf file
 * @magic: pointer to the file header
 * Return: void
 */
void print_magic(unsigned char *magic)
{
	int i = 0;

	dprintf(STDOUT_FILENO, "  Magic:   ");
	while (i < EI_NIDENT)
	{
		printf("%02x", magic[i]);
		if (i < (EI_NIDENT - 1))
			printf(" ");
		else
			printf("\n");
		i++;
	}
}

/**
 * print_class - prints the class of an elf filetype
 * @class: pointer to the elf file header
 * Return: void
 */
void print_class(unsigned char *class)
{
	printf("  Class:                             ");
	switch (class[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("None\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown class: %x>\n", class[EI_CLASS]);
	}
}

/**
 * print_data - prints the data encoding type of an elf file
 * @data: pointer to the elf file header
 * Return: void
 */
void print_data(unsigned char *data)
{
	printf("  Data:                              ");

	switch (data[EI_DATA])
	{
	case ELFDATANONE:
		printf("None\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown data encoding: %x>\n", data[EI_CLASS]);
	}
}

/**
 * print_version - prints the version object file version
 * @version: pointer to the elf file header
 * Return: void
 */
void print_version(unsigned char *version)
{
	printf("  Version:                           %d",
	       version[EI_VERSION]);

	switch (version[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_os - prints the os/abi type of the file
 * @os: pointer to the elf file
 * Return: void
 */
void print_os(unsigned char *os)
{
	printf("  OS/ABI:                            ");

	switch (os[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown os: %x>\n", os[EI_OSABI]);
	}
}

/**
 * print_abi - prints the abi version of the file
 * @abi: pointer to the file header
 * Return: void
 */
void print_abi(unsigned char *abi)
{
	printf("  ABI Version:                       %d\n",
	       abi[EI_ABIVERSION]);
}

/**
 * print_type - prints the type of an elf file
 * @type: the elf file type
 * @data_type: pointer to the elf type
 * Return: void
 */
void print_type(unsigned int type, unsigned char *data_type)
{
	if (data_type[EI_DATA] == ELFDATA2MSB)
		type >>= 8;

	printf("  Type:                              ");

	switch (type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown type: %x>\n", type);
	}
}

/**
 * print_entry - prints an elf file program entry code
 * @entry: the file entry point
 * @ident: pointer to elf file header
 * Return: void
 */
void print_entry(unsigned long int entry, unsigned char *ident)
{
	printf("  Entry point address:               ");

	if (ident[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
			  ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}

	if (ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);

	else
		printf("%#lx\n", entry);
}

/**
 * print_hdr - prints the header information of an elf file
 * @elf: a pointer to the elf type file
 * Return: void
 */
void print_hdr(Elf64_Ehdr *elf)
{
	dprintf(STDOUT_FILENO, "ELF Header:\n");
	print_magic(elf->e_ident);
	print_class(elf->e_ident);
	print_data(elf->e_ident);
	print_version(elf->e_ident);
	print_os(elf->e_ident);
	print_abi(elf->e_ident);
	print_type(elf->e_type, elf->e_ident);
	print_entry(elf->e_entry, elf->e_ident);
}

/**
 * main - the program's main entry function
 * @argc: total number of args from the CLI
 * @argv: array of pointer to the args
 * Return: 0(success), exit on program failure
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
	Elf64_Ehdr *header;
	int elf_tmp, flag;

	if (!argv[1])
	{
		dprintf(STDERR_FILENO, "Usage: %s filename\n", argv[0]);
		exit(98);
	}
	elf_tmp = open(argv[1], O_RDONLY);

	if (elf_tmp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to open the file \"%s\"\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));

	if (!header)
	{
		dprintf(STDERR_FILENO, "Error allocating memory for file %s\n", argv[1]);
		close(elf_tmp);
		exit(98);
	}
	check_filetype(elf_tmp);
	flag = read(elf_tmp, header, sizeof(Elf64_Ehdr));

	if (flag == -1)
	{
		dprintf(STDERR_FILENO, "Eror: Unable to read file; fd %d", elf_tmp);
		close_file(elf_tmp);
		free(header);
		exit(98);
	}
	print_hdr(header);

	return (0);
}
