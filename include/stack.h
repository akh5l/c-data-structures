#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 100

typedef struct {
  void* arr[MAX_SIZE];
  int top;
} Stack;

void stack_initialize(Stack* s);

void stack_push(Stack* s, const void* data);

void* stack_pop(Stack* s);

void* stack_peek(Stack* s);

#endif