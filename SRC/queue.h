#ifndef __QUEUE_H_
#define __QUEUE_H_

struct queue{
	float element;
	struct queue * next;
};

extern struct queue * queue_buffer;
extern struct queue * queue_rear;

void enqueue(float);
float  dequeue(void);

#endif
