# MEMORY ALLOCATION IN C LANGUAGE

This is a collection of tasks in c for dynmaic memory allocation and deallocation in C pogramming language using three (3) functions stored in the stdlib.h header file.

# MALLOC
<code>void* malloc (size_t size_in_byte)</code>
This is use to allocate dynamic memory to data type. It does not initializes the memory location with any data type.

# CALLOC
<code> void* calloc (size_t number_of_elements, size_t size_each_of_element) </code>
The functon can be use to allocate memory space for our data dynamically during our program runtime just like malloc. But it assumes an int *[] type, thereby intializing each distinct space with a value of 0.

# REALLLOC
<code> void* realloc(void* memory, size_t memory_size) </code>
This function is typically used to extend the size of a dynamic memory while retaining the values stored in the previous memeory. This can be more dangerous to use compare to its mate if used in a wrong way.

# FREE
<code> void* free(void* memory) </code>
This is a cleanup function for the previous memory allocation function.
It deallocates the memory space but it never deletes the memory in the system architecture i.e the memory location is still accessible if the address is still known to the programmer, so a thorough care has to be taken when using the function.