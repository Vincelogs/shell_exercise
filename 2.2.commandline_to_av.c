#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
 * main - code
 * @argc: argument count
 * @argv: argument variables
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;
	char *token;
	
	(void)argc;
	(void)argv;

	printf("$ ");

	nread = getline(&line, &len, stdin);
	printf("%s", line);
	
	token = strtok(line, " ");

	while (token)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	printf("Number of characters: %ld\n", nread);

	free(line);
	exit(EXIT_SUCCESS);
}
