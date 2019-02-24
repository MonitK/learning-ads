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

int main()
{
  return 0;
}
