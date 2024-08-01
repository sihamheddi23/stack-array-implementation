//
// Created by siham on 31/07/2024.
//

#include <stdio.h>
#include "array_i.h"
int top = -1;
int S[MAX_SIZE];
void push(int value) {
  if (top == MAX_SIZE - 1) {
    printf("you can't add new value \n ");
    return;
  }

  top++;
  S[top] = value;
}

int getTop() { return S[top]; }

void pop() {
  if (top == -1) {
    printf("you can't delete the stack is already empty \n");
  }
  top--;
}

bool isEmpty() { return top == -1; }

void display() {
  printf("display the stack from top: \n");
  for (int i = top; i > -1; i--) {
    printf("%d \n", S[i]);
  }
}