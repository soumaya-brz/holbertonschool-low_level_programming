/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, exits with error codes otherwise
 */
int main(int argc, char *argv[])
{
	...
}

/**
 * open_file_from - opens the source file for reading
 * @filename: name of the file to open
 *
 * Return: file descriptor of the source file
 * Exit: 98 if the file cannot be opened
 */
int open_file_from(char *filename)
{
	...
}

/**
 * open_file_to - opens the destination file for writing
 * @filename: name of the file to open/create
 *
 * Return: file descriptor of the destination file
 * Exit: 99 if the file cannot be created or opened
 */
int open_file_to(char *filename)
{
	...
}

/**
 * copy_file - copies content from fd_from to fd_to
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 *
 * Exit: 98 on read error, 99 on write error, 100 on close error
 */
void copy_file(int fd_from, int fd_to)
{
	...
}
