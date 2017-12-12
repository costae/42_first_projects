#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "head.h"

typedef struct queue
{
		int val;
			struct queue *next;
} queue;

typedef struct stack
{
		int val;
			struct stack *next1;
} stack;

int main(int argc, char **argv)
{
	int i;
	int t;
	queue *head;
	queue *temp;
	stack *head1;
	stack *temp1;

	i = 0;
	if (argc != 2)
		return (0);
	else
	{
		while (argv[1][i] != '\0')
		{
			printf("%c", argv[1][i]);
			i++;
		}
		printf("\n");
	}
}
