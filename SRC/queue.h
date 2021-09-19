#ifndef __QUEUE_H_
#define __QUEUE_H_

struct queue{
	char element;
	struct queue * next;
};

extern struct queue * queue_buffer;
extern struct queue * queue_rear;

void enqueue(char);
char dequeue(void);

#endif
