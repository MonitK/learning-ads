#include <iostream>

#define MAX 100

using namespace std;

int main()
{
  int arr[MAX], sum=0,i;
  int count;
  
  cout<<"Enter no. of elements : ";
  cin>>count;
  for(i=0;i<count;i++)
  {
    arr[i]=i;
    sum+=arr[i];
  }
  cout<<"Array Sum : "<<sum;
  return 0;
}
