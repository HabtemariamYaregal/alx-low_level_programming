#include "main.h"
#include "elf.h"
/**
 * check - Checks if a file is an ELF.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 * Description: If the file is not an ELF file - exit code 98.
 */
void check(unsigned char *e_ident)
{
int i;
for (i = 0; i < 4; i++)
{
if (e_ident[i] != 127 &&
e_ident[i] != 'E' &&
e_ident[i] != 'L' &&
e_ident[i] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}

/**
 * magic - Prints the magic numbers.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 * Description: Magic numbers are separated by spaces.
 */
void magic(unsigned char *e_ident)
{
int x;
printf("  Magic:   ");
for (x = 0; x < EI_NIDENT; x++)
{
printf("%02x", e_ident[x]);
if (x == EI_NIDENT - 1)
{
printf("\n");
}
else
{
printf(" ");
}
}
}

/**
 * class - Prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void class(unsigned char *e_ident)
{
printf("  Class:                             ");
switch (e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
 * data - Prints the data of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void data(unsigned char *e_ident)
{
printf("  Data:                              ");
switch (e_ident[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
 * version - Prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void version(unsigned char *e_ident)
{
printf("  Version:                           %d",
e_ident[EI_VERSION]);
switch (e_ident[EI_VERSION])
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
 * osabi - Prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void osabi(unsigned char *e_ident)
{
printf("  OS/ABI:                            ");
switch (e_ident[EI_OSABI])
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
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}
}

/**
 * abi - Prints the ABI version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF ABI version.
 */
void abi(unsigned char *e_ident)
{
printf("  ABI Version:                       %d\n",
e_ident[EI_ABIVERSION]);
}

/**
 * type - Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void type(unsigned int e_type, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
e_type >>= 8;
printf("  Type:                              ");
switch (e_type)
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
printf("<unknown: %x>\n", e_type);
}
}

/**
 * entry - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void entry(unsigned long int e_entry, unsigned char *e_ident)
{
printf("  Entry point address:               ");
if (e_ident[EI_DATA] == ELFDATA2MSB)
{
e_entry = ((e_entry << 8) & 0xFF00FF00) |
((e_entry >> 8) & 0xFF00FF);
e_entry = (e_entry << 16) | (e_entry >> 16);
}
if (e_ident[EI_CLASS] == ELFCLASS32)
{
printf("%#x\n", (unsigned int)e_entry);
}
else
{
printf("%#lx\n", e_entry);
}
}

/**
 * closed - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void closed(int elf)
{
if (close(elf) == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't close fd %d\n", elf);
exit(98);
}
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
Elf64_Ehdr *header;
int fd, s;
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
closed(fd);
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
s = read(fd, header, sizeof(Elf64_Ehdr));
if (s == -1)
{
free(header);
closed(fd);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
exit(98);
}
check(header->e_ident);
printf("ELF Header:\n");
magic(header->e_ident);
class(header->e_ident);
data(header->e_ident);
version(header->e_ident);
osabi(header->e_ident);
abi(header->e_ident);
type(header->e_type, header->e_ident);
entry(header->e_entry, header->e_ident);
free(header);
closed(fd);
return (0);
}
