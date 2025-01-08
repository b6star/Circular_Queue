#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

typedef int element;

typedef struct {
	element data[SIZE];
	int rear, front;
}QueueType;

void init(QueueType* Q)
{
	Q->rear = Q->front = -1;
}

int is_empty(QueueType* Q)
{
	return Q->front == Q->rear;
}

int is_full(QueueType* Q)
{
	return Q->rear == SIZE - 1;
}

void enqueue(QueueType* Q, element e)
{
	if (is_full(Q))
		printf("Overflow\n");
	else
	{
		Q->rear++;

		Q->data[Q->rear] = e;
	}
}

element dequeue(QueueType* Q)
{
	if (is_empty(Q))
	{
		printf("Empty\n");
		return 0;
	}
	else
	{
		Q->front++;
		return Q->data[Q->front];
	}
}

void print_Queue(QueueType* Q)
{
	printf("Front Pos : %d\n, Rear Pos : %d\n", Q->front, Q->rear);
	for (int i = Q->front + 1; i <= Q->rear; i++)
	{
		printf("[%d] ", Q->data[i]);
	}
	printf("\n");
}
