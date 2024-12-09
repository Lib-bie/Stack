#ifndef MY_QUEUE
#define MY_QUEUE

#include "list.h"

struct Queue {
  List list;
};

int Head(const Queue& queue);
int Tail(const Queue& queue);
void Push(Queue& queue, int value);
void Pop(Queue& queue);
size_t Size(Queue& queue);
bool IsEmpty(Queue& queue);
void Init(Queue& queue);
void Free(Queue& queue);

#endif  // MY_QUEUE
