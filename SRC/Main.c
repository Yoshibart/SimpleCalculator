#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "stack.h"

//struct queue * queue_buffer = NULL;
//struct queue * queue_rear = NULL;
//struct stack * stack_buffer = NULL;

void postfix(char *);
void display(void);
int main(){
	char testInput[] = {'4', '+', '8', '*', '9', '\0'};
	postfix(testInput);
	display();
	return 0;
}

void display(){
	for(struct queue * buffer = queue_buffer; buffer != NULL; buffer = buffer->next){
		printf("%c", buffer->element);
	}
	printf("\n");
}

void postfix(char * charm){
	int testOperands = 0;
	char * input = charm;
	while(*input){
		testOperands  = *input;
		if(testOperands>47 && testOperands<58) enqueue(*input);
		if(*input == '+' || *input == '-' || *input == '/' || *input == '*'){
			while(stack_buffer && (stack_buffer->element > *input)){
				enqueue(pop());
				stack_buffer = stack_buffer->next;
			}
		}
		push(*input);
		input++;
	}
	while(stack_buffer){
		enqueue(pop());
		stack_buffer = stack_buffer->next;
	}
}
