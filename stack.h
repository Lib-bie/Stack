#ifndef MY_STACK
#define MY_STACK

#include "list.h"

struct Stack {
  List list;
};

int Top(const Stack& stack);
void Push(Stack& stack, int value);
void Pop(Stack& stack);
size_t Size(const Stack& stack);
bool IsEmpty(const Stack& stack);
void Init(Stack& stack);
void Free(Stack& stack);

#endif  // MY_STACK
