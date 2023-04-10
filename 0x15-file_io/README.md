The tasks in this directory include:

    Reading a text file and printing it to the standard output. The function can read and print a specific number of letters, and returns the number of bytes read and printed. If the file cannot be opened or read, or if the write call fails, the function returns 0.

    Creating a file with the specified filename and writing a given null-terminated string to it. If the string is NULL, the function creates an empty file. The created file has read and write permissions only for the owner. If the file already exists, the function overwrites its contents. If the function fails, it returns -1.

    Appending a given null-terminated string to the end of a specified file. If the file does not exist, the function does not create it. If the string is NULL, the function does not add anything to the file. If the function fails, it returns -1.

    Copying the contents of one file to another file. If the destination file already exists, its contents are overwritten. If the number of arguments is incorrect, the function prints an error message to the standard error output and exits with an error code. If the source file does not exist or the user lacks read permissions, the function prints an error message and exits with an error code. If the destination file cannot be created or writing to it fails, the function prints an error message and exits with an error code.

    Displaying the information contained in the ELF header at the start of an ELF file. The program reads the file and displays its magic number, class, data, version, OS/ABI, ABI version, type, and entry point address. If the file is not an ELF file or if an error occurs, the program prints an error message to the standard error output and exits with an error code.
