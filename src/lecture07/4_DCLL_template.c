#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node
{
  int data;
  struct Node* next;  
  struct Node* prev;  
};

typedef struct Node NODE;

NODE* head;

NODE* makeNode()
{
  NODE* node = (NODE*) malloc(sizeof(NODE));
  node->next = node;
  node->prev = node;
  return node;
}

void addFirst(int val)
{
  // Make a new node
  NODE* node = makeNode();
  node->data = val;
  
  // Set pointers of head
  if(head != NULL) {






  }

  head = node;
}

void printListBackward()
{
  NODE *curr = head;
  int count=0;
  if(head == NULL) {
    printf("No nodes in the list\n");
    return;
  }





}

void printListForward()
{
  NODE *curr = head;
  int count=0;
  if(head == NULL) {
    printf("No nodes in the list\n");
    return;
  }





}


int main()
{
  srand(0);
  printListForward();
  for(int i=0; i<10; i++)
    addFirst(rand() % 100);
  printListForward();
  printf("\n");
  printListBackward();
}

