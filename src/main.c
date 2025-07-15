#include <stdio.h>
#include "../include/stack.h"

int main() {

  Stack stack;
  stack_initialize(&stack);


  char a[] = "hello!";

  stack_push(&stack, a);


  printf("Peeked: %s\n",(char*)stack_peek(&stack));

  // printf("Popped: %d\n",*(int*)stack_pop(&stack));
  // printf("Popped: %d\n",*(int*)stack_pop(&stack));
  // printf("Popped: %d\n",*(int*)stack_pop(&stack));

  // printf("Popped: %d\n",*(int*)stack_pop(&stack));


  return 0;
}