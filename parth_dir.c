#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

extern char **environ;

void path_dir_link(const char *name)
{
	int i = 0, sv, count = 0;
	char *str;
	typedef struct path_dir
	{
		char *lstr;
		struct path_dir *next;
	} pathdir;

	pathdir *head, *newnode, *temp;
	head = NULL;

	while (environ[i])
	{
		str = strtok(environ[i], "=");

		if (strcmp(str, name) == 0)
			break;
		i++;
	}
	while (str != NULL)
	{
		str = strtok(NULL, ":");
		if (str == NULL)
			break;
		newnode = malloc(sizeof(newnode));
		if (newnode == NULL)
		{
			printf("Error\n");
		}

		newnode->lstr = str;
		newnode->next = NULL;

		if (head == NULL)
		{
			head = newnode;
			temp = newnode;
		}
		else
		{
			temp->next = newnode;
			temp = newnode;
		}
	}
	printf("your nodes are:\n");
	temp = head;
	while (temp != NULL)
	{
		printf("%s\n", temp->lstr);
		temp = temp->next;
		count++;
	}
}

int main(int argc, char *argv[])
{
	path_dir_link(argv[1]);

	return (0);
}

