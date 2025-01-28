#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
  int arr[5]={12,83,34,54,11};
  int n = 5;
  // find minimum from unsorted array and swap it with the current element. 
  for(int i=0; i<=n-2; i++) //we have taken n-2 because last number will always be sorted
  {
    int minindex = i;
    for(int j=i; j<=n-1; j++) // from unsorted part to end of the array
    {
      if(arr[j]<arr[minindex]) //if currrent element is less than the element at minindex then change minindex 
      {
        minindex = j;
      }
      swap(arr[i], arr[minindex]);
    }
  }
  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}
