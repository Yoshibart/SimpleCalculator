#ifndef __STACK_H_
#define __STACK_H_

struct stack{
	int element;
	struct stack * next;
};
extern struct stack * stack_buffer;
void push(int);
int pop(void);
void display_stack(void);
#endif
