#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define MAX_LINE_LENGTH 80
#define MAX_FUNCTION_LINES 40

/**
* print_error - Prints an error message to stderr and exits with status 98.
*/
void print_error(void)
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}

/**
* print_elf_header - Prints the ELF header information.
* @header: Pointer to the ELF header structure.
*/
void print_elf_header(Elf64_Ehdr *header)
{
char *osabi_desc[] = {"UNIX - System V", "UNIX - HP-UX", "UNIX - NetBSD", "UNIX - Linux",
"UNIX - Solaris", "UNIX - IRIX", "UNIX - FreeBSD", "UNIX - TRU64",
"ARM", "Standalone App"};

char *type_desc[] = {"NONE (Unknown type)", "REL (Relocatable file)", "EXEC (Executable file)",
"DYN (Shared object file)", "CORE (Core file)"};

printf("ELF Header:\n");
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
{
printf("%02x", header->e_ident[i]);
if (i == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
printf("  Class:                             ELF%d\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
printf("  Data:                              2's complement, %s endian\n",
header->e_ident[EI_DATA] == ELFDATA2LSB ? "little" : "big");
printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            %s\n",
header->e_ident[EI_OSABI] < 10 ? osabi_desc[header->e_ident[EI_OSABI]] : "<unknown>");
printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              %s\n", header->e_type < 5 ? type_desc[header->e_type] : "<unknown>");
printf("  Entry point address:               %#lx\n", header->e_entry);
}

/**
* main - Entry point of the program.
* @argc: The number of arguments passed to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success, 98 on failure.
*/
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;

if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
exit(98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}

if (read(fd, &header, sizeof(header)) != sizeof(header))
{
dprintf(STDERR_FILENO, "Error: Unable to read ELF header\n");
close(fd);
exit(98);
}

if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
print_error();

print_elf_header(&header);

close(fd);
return (0);
}
