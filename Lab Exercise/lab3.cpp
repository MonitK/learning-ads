#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node* link;
};

struct Node* top;

void push(int data)
{
  struct Node* temp;
  temp = (struct Node*)malloc(sizeof(struct Node));

  if (!temp)
  {
    printf("\nHeap Overflow");
    exit(1);
  }

  temp->data = data;

  temp->link = top;

  top = temp;
}

int isEmpty()
{
    return top == NULL;
}

int peek()
{
    // check for empty stack
    if (!isEmpty(top))
        return top->data;
    else
        exit(EXIT_FAILURE);
}

void pop()
{
  struct Node* temp;

  if (top == NULL)
  {
    printf("\nStack Underflow");
    exit(1);
  } 
}

int main()
{
  return 0;
}
