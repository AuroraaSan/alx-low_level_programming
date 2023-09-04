#include "main.h"
#include <elf.h>

/**
 * error_exit - Print an error message to stderr and exit with a status code.
 * @msg: The error message to print.
 * @status: The status code to exit with.
 */
void error_exit(const char *msg, int status)
{
	dprintf(2, "%s\n", msg);
	exit(status);
}

/**
 * print_elf_header - Display the information contained in the ELF header.
 * @elf_header: A pointer to the ELF header structure.
 */
void print_elf_header(Elf64_Ehdr *elf_header)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\n");
    printf("  Class:%s\n", elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:%s\n", elf_header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:%d (current)\n", elf_header->e_ident[EI_VERSION]);
    printf("  OS/ABI:%s\n", elf_header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "UNIX - Unknown");
    printf("  ABI Version:%d\n", elf_header->e_ident[EI_ABIVERSION]);
    printf("  Type:%s (%s)\n", elf_header->e_type == ET_EXEC ? "EXEC (Executable file)" :
           elf_header->e_type == ET_REL ? "REL (Relocatable file)" :
           elf_header->e_type == ET_DYN ? "DYN (Shared object file)" :
           "UNKNOWN", elf_header->e_type == ET_NONE ? "No file type" : "Unknown");
    printf("  Entry point address:0x%lx\n", (unsigned long)elf_header->e_entry);
}

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr elf_header;
	if (argc != 2)
	{
		error_exit("Usage: elf_header elf_filename", 98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		error_exit("Error: Can't open file", 98);
	}
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		close(fd);
		error_exit("Error: Can't read ELF header", 98);
	}
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
        elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
        elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		close(fd);
		error_exit("Error: Not an ELF file", 98);
	}
	print_elf_header(&elf_header);
	close(fd);
	return 0;
}
