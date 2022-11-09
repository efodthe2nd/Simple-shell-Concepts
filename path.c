#include <stdio.h>
#include <unistd.h>
#include <string.h>

extern char **environ;

int main(int argc, char **argv)
{
	int i = 0;
	char *token;
	const char s[2] = "=";
	const char t[2] = ":";
	
	while (environ[i])
	{
		token = strtok(environ[i], s);
		if (strcmp(token, argv[1]) == 0)
		{
			break;	
		}
		i++;
	}
		
	while (token != NULL)
	{
		token = strtok(NULL, t);
		if (token == NULL)
			break;
		printf("%s\n", token);
	}

	return (0);
}
