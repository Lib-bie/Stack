#include "queue.h"

int Head(const Queue& queue) {
  return HeadValue(queue.list);
}

int Tail(const Queue& queue) {
  return TailValue(queue.list);
  // queue.list.tail -> value;
}

void Push(Queue& queue, int value) {
  PushBack(queue.list, value);
}

void Pop(Queue& queue) {
  PopFront(queue.list);
}

size_t Size(Queue& queue) {
  return Size(queue.list);
}

bool IsEmpty(Queue& queue) {
  return IsEmpty(queue.list);
}

void Init(Queue& queue) {
  Init(queue.list);
}

void Free(Queue& queue) {
  Free(queue.list);
}
