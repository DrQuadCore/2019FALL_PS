#include <stdio.h> 
#include <stdlib.h> 

struct node 
{ 
  int data; 
  struct node* left; 
  struct node* right; 
}; 

struct node* newNode(int data) 
{ 
  struct node* node = (struct node*) 
    malloc(sizeof(struct node)); 
  node->data = data; 
  node->left = NULL; 
  node->right = NULL; 

  return(node); 
} 

void postorder(struct node* node) 
{ 
  if (node == NULL) 
    return; 

} 

void inorder(struct node* node) 
{ 
  if (node == NULL) 
    return; 
} 

void preorder(struct node* node) 
{ 
  if (node == NULL) 
    return; 

}     

/* Driver program to test above functions*/
int main() 
{ 
  struct node *root = newNode(1); 
  root->left        = newNode(2); 
  root->right       = newNode(3); 
  root->left->left  = newNode(4); 
  root->left->right = newNode(5);  
  root->right->left  = newNode(6); 
  root->right->right = newNode(7);  

  printf("\nPreorder traversal\n"); 
  preorder(root); 

  printf("\nInorder traversal\n"); 
  inorder(root);   

  printf("\nPostorder traversal\n"); 
  postorder(root); 
  printf("\n"); 

  return 0; 
} 
