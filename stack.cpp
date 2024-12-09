#include "stack.h"

int Top(const Stack& stack) {
  return HeadValue(stack.list);
}

void Push(Stack& stack, int value) {
  PushFront(stack.list, value);
}

void Pop(Stack& stack) {
  PopFront(stack.list);
}

size_t Size(const Stack& stack) {
  return Size(stack.list);
}

bool IsEmpty(const Stack& stack) {
  return IsEmpty(stack.list);
}

void Init(Stack& stack) {
  Init(stack.list);
}

void Free(Stack& stack) {
  Free(stack.list);
}
