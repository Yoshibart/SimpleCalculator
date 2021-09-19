//#ifndef __QUEUE_H_
//#define __QUEUE_H_
//
//struct queue{
//	char element;
//	struct queue * next;
//};
//
//extern struct queue * queue_buffer;
//extern struct queue * queue_rear;
//
//void enqueue(char);
//char dequeue(void);
//
//#endif
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct queue * queue_buffer = NULL;
struct queue * queue_rear = NULL;


void enqueue(char element){
	struct queue * ptr = (struct queue *) malloc(sizeof(struct queue));
	ptr->element = element;
	ptr->next = NULL;
	if(queue_rear)
		queue_rear->next = ptr;
	else
		queue_buffer = ptr;
	queue_rear = ptr;
}

char dequeue(void){
	if(queue_buffer){	
		struct queue  * ptr = queue_buffer;
		char element = ptr->element;
		queue_buffer = ptr->next;
		if(ptr == queue_rear){
			queue_rear = NULL;	
		}
		free(ptr);
		return element;
	}
	return ' ';
}
