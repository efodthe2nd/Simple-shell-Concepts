#include <stdio.h>
#include <unistd.h>
#include <string.h>

extern char **environ;

char *_getenv(const char *name)
{
	int i = 0;
	char *token;
	const char s[2] = "="; 

	while (environ[i] != NULL)
	{
		token = strtok(environ[i], s);
		if (strcmp(token, name) == 0)
		{
			token = strtok(NULL, "");
			return (token);
		}
		i++;
	}

	return (NULL);
}
int main(void)
{
	char *str = "PATH";
	printf("%s\n", _getenv(str));
	return (0);
}
