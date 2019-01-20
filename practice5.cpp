#include <iostream>

using namespace std;

int main()
{
  cout<<"Enter no. of elements : ";
  int count, sum=0, i;
  cin >>count;

  int *arr = (int*) malloc(sizeof(int)*count);
  //Dynamically allocating size

  for(i=0;i<count;i++)
  {
    arr[i]=i;
    sum+=arr[i];
  }
  cout<<"Array Sum : "<<sum;
  return 0;
}
