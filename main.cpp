#include "list.h"
#include "stack.h"
#include "queue.h"

#include <iostream>

int main() {
  List list;
  Init(list);

  PushBack(list, 1);
  PushBack(list, 2);
  PushFront(list, 0);

  std::cout << HeadValue(list) << ' ' << TailValue(list) << ' ' << Size(list) << std::endl;

  PopFront(list);
  Pop(list, 1);

  std::cout << HeadValue(list) << ' ' << TailValue(list) << ' ' << Size(list) << std::endl;

  Free(list);

  Queue queue;
  Init(queue);

  Push(queue, 1);
  Push(queue, 2);
  Push(queue, 3);

  Pop(queue);

  std::cout << Head(queue) << ' ' << Tail(queue) << ' ' << Size(queue) << std::endl;

  Free(queue);
  return 0;
}
