#ifndef MY_LIST
#define MY_LIST
#include <cstddef>

struct NodeList {
  int value;
  NodeList* p_next;
};

/*

List(0xafafaf, 0xaefaef, 3)============================
      ||                                              ||
      \/                                              \/
[&]=0xafafaf             [&]=0xeafeaf             [&]=0xaefaef
NodeList(0, 0xeafeaf) -> NodeList(1, 0xaefaef) -> NodeList(2, 0x0)
*/

struct List {
  NodeList* head;
  NodeList* tail;
  size_t size;
};

void Init(List& list);
void Init(List& list);
void Free(List& list);
size_t Size(const List& list);
bool IsEmpty(const List& list);
int HeadValue(const List& list);
int TailValue(const List& list);
void PushBack(List& list, int value);
void PushFront(List& list, int value);
void Push(List& list, size_t idx, int value);
void PopBack(List& list);
void PopFront(List& list);
void Pop(List& list, size_t idx);

#endif  // MY_LIST
