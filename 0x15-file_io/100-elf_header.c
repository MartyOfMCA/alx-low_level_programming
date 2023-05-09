#include "main.h"

int main(int argc, char *argv[])
{
	Elf32_Ehdr elf_header64;
	int file_descriptor, bytes_read;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf-file\n", argv[0]);
		exit(98);
	}
	file_descriptor = open(argv[1], O_RDONLY);
	if (file_descriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: No such file %s\n", argv[1]);
		close(file_descriptor);
		exit (98);
	}
	bytes_read = read(file_descriptor, &elf_header64, sizeof(elf_header64));
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		close(file_descriptor);
		exit (98);
	}
	start_read(elf_header64.e_ident);
	print_magicnumber(elf_header64.e_ident);
	print_class(elf_header64.e_ident);
	print_data(elf_header64.e_ident);
	print_version(elf_header64.e_ident);
	print_os(elf_header64.e_ident);
	print_abiversion(elf_header64.e_ident);
	print_type(elf_header64.e_type, elf_header64.e_ident);
	print_record(elf_header64.e_entry, elf_header64.e_ident);
	return (0);
}

void start_read(unsigned char *e_ident)
{
	printf("ELH header:\n");
	if (e_ident[EI_MAG0] != ELFMAG0 ||
		e_ident[EI_MAG1] != ELFMAG1 ||
		e_ident[EI_MAG2] != ELFMAG2 ||
		e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit (98);
	}
}

void print_magicnumber(unsigned char *e_ident)
{
	int einident_index = 0;

	printf("  Magic:   ");
	while (einident_index < EI_NIDENT)
	{
		printf("%02x", e_ident[einident_index]);
		if (einident_index < (EI_NIDENT - 1))
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
		einident_index++;
	}
}

void print_class(unsigned char *e_ident)
{
	int class = e_ident[EI_CLASS];

	printf("  Class:                            ");
	switch(class)
	{
		case ELFCLASSNONE:
			printf("none");
			break;
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASS64:
			printf("ELF64");
			break;
		default:
			printf("<unknown %x>", class);
			break;
	}
	printf("\n");
}

void print_data(unsigned char *e_ident)
{
	int data = e_ident[EI_DATA];

	printf("  Data:                              ");
	switch(data)
	{
		case ELFDATANONE:
			printf("none");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATA2MSB:
			printf("Two's complement, big-endian");
			break;
		default:
			printf("<unknown %x>", data);
			break;
	}
	printf("\n");
}

void print_version(unsigned char *e_ident)
{
	int version = e_ident[EI_VERSION];

	printf("  Version:                           ");
	switch(version)
	{
		case EV_NONE:
			printf("Invalid version");
			break;
		case EV_CURRENT:
			printf("1 (current)");
			break;
	}
	printf("\n");
}

void print_os(unsigned char *e_ident)
{
	int os_abi = e_ident[EI_OSABI];

	printf("  OS/ABI:                            ");
	switch(os_abi)
	{
		case ELFOSABI_SYSV:
			printf("UNIX System V ABI");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX ABI");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD ABI");
			break;
		case ELFOSABI_LINUX:
			printf("Linux ABI");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris ABI");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX ABI");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD ABI");
			break;
		case ELFOSABI_TRU64:
			printf("TRU64 UNIX ABI");
			break;
		case ELFOSABI_ARM:
			printf("ARM architecture ABI");
			break;
		case ELFOSABI_STANDALONE:
			printf("Stand-alone (embedded) ABI");
			break;
		default:
			printf("<unknown %x>", os_abi);
			break;
	}
	printf("\n");
}

void print_abiversion(unsigned char *e_ident)
{
	int abi_version = e_ident[EI_ABIVERSION];

	printf("  ABI Version:                       %d\n", abi_version);
}

/**
 * printf_type - Identify the object file type.
 *
 * @type: The object file type.
 * @i_ident: The elf header file details.
 *
 */
void print_type(uint16_t e_type, unsigned char *e_ident)
{
	int data = e_ident[EI_DATA];

	if (data == ELFDATA2MSB)
	{
		e_type >>= 8;
	}
	printf("  Type:                              ");
	switch(e_type)
	{
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown %x>", e_type);
			break;
	}
	printf("\n");
}

void print_record(unsigned long int e_entry, unsigned char *e_ident)
{
	int class = e_ident[EI_CLASS];

	printf("  Entry point address:               ");
	if (class == ELFCLASS32)
	{
		printf("%#x", (unsigned int)e_entry);
	}
	else
	{
		printf("%#lx", e_entry);
	}
	printf("\n");
}
