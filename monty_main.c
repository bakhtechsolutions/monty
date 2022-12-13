#include "monty.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


char **op_toks = NULL;
/**
 * main - main function in the project
 * @argc: number of args provided to the program
 * @argv: array containing program name and args
 * Return: 0 for success and non-zero for failure
 */
int main(int argc, char **argv)
{
FILE *script_fd = NULL;
int exit_status = EXIT_SUCCESS;
if (argc != 2)
{
return (usage_error());
}
script_fd = fopen(argv[1], "r");
if (script_fd == NULL)
{
f_open_error(argv[1]);
return (EXIT_FAILURE);
}
exit_status = run_monty(script_fd);
fclose(script_fd);
return (exit_status);
}
