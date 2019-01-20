#include <iostream>

#define MAX 100

using namespace std;

int main()
{
  int arr[MAX], sum=0,i;

  cout<<"Enter no. of elements : ";
  cin>>int count;
  for(i=0;i<count;i++)
  {
    arr[i]=i;
    sum+=arr[i];
  }
  cout<<"Array Sum : "<<sum;
  return 0;
}
