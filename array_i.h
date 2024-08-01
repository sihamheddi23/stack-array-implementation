#ifndef STACK_ARRAY_I_H
#define STACK_ARRAY_I_H

#include <stdbool.h>

#define MAX_SIZE 101

extern int top;
extern int S[MAX_SIZE];

void push(int value);
int getTop();
void pop();
bool isEmpty();
void display();

#endif // STACK_ARRAY_I_H
