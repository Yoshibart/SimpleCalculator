#ifndef __STACK_H_
#define __STACK_H_

struct stack;
extern struct stack * stack_buffer;
void push(int);
int pop(void);

#endif
