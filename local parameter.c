#include <stdio.h>

void f(void);

int int main(void)
{
  int i;
  for(i=0;i<10;i++)
  {
    f();
  }
  return 0;
}

void f(void)
{
  int j=10;
  printf("%d",j);
  j++;
    //The increment operator has no effect on value of j because it is local in f so is initiallised every time.
}
