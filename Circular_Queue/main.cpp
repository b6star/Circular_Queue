#include <stdio.h>
#include "circular_queue.h"

int main()
{
	QueueType que;
	init(&que);
	enqueue(&que, 2);
	enqueue(&que, 0);
	enqueue(&que, 1);
	enqueue(&que, 5);
	dequeue(&que);
	print_Queue(&que);
	printf("test2\n");
	return 0;
}