//#ifndef __QUEUE_H_
//#define __QUEUE_H_
//
//struct queue{
//	float element;
//	struct queue * next;
//};
//
//extern struct queue * queue_buffer;
//extern struct queue * queue_rear;
//
//void enqueue(float);
//float  dequeue(void);
//
//#endif
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct queue * queue_buffer = NULL;
struct queue * queue_rear = NULL;


void enqueue(float element){
	struct queue * ptr = (struct queue) malloc(sizeof(struct queue));
	ptr->element = element;
	ptr->next = NULL;
	(queue_rear) ? queue_rear->next = ptr : queue_buffer = ptr;
	queue_rear = ptr
}

float dequeue(void){
	if(queue_buffer){	
		struct queue  * ptr = queue_buffer;
		float element = ptr->element;
		queue_buffer = ptr->next;
		if(ptr == queue_rear){
			queue_rear = NULL;	
		}
		free(ptr);
		return element;
	}
	return 0;
}
