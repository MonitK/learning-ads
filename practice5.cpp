#include <iostream>
#include <vertor>

using namespace std;

int main()
{
  cout<<"Enter no. of elements : ";
  int count, sum=0, i;
  cin >>count;

  vertor<int> arr;    //Default size
  arr.resize(count);  //Set resize
  //Dynamically allocating size using vector

  for(i=0;i<arr.size();i++)
  {
    arr[i]=i;
    sum+=arr[i];
  }
  cout<<"Array Sum : "<<sum;
  return 0;
}
