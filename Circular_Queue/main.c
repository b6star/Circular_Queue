#include <stdio.h>
#include "circular_queue.h"

int main()
{
	QueueType que;
	init(&que);
	enqueue(&que, 2);
	enqueue(&que, 0);
	enqueue(&que, 2);
	enqueue(&que, 5);
	dequeue(&que);
	print_Queue(&que);
	printf("test by Junsung's Desktop\n");
	return 0;
}