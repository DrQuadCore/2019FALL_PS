#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node
{
  int data;
  struct Node* next;  
};

typedef struct Node NODE;

NODE* head;

#ifndef MAL
void addFirst(int val)
{
  NODE* node = (NODE*) malloc(sizeof(NODE));
  node->data = val;
  node->next = head;
  head = node;
}
#else
void addFirstMal(int val)
{
  NODE node;
  node.data = val;
  if(head != NULL) { // has at least one element
    node.next = head;
  }
  head = &node;
}
#endif



void printList()
{
  NODE *curr = head;
  int count=0;
  while(curr != NULL) {
    printf("%d: Value of current node: %d\n", ++count, curr->data);
    curr = curr->next;
  }
}

int main()
{
  srand(0);
  printList();
  for(int i=0; i<10; i++)
#ifdef MAL
    addFirstMal(rand() % 100);
#else
    addFirst(rand() % 100);
#endif
  printList();
}
