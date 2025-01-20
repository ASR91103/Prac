#include<iostream>
#include<vector>
#include<algorithm> 
#include<climits>    
using namespace std;

int removeDuplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) { // found
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1; //not
}
int main() {
  int arr[] = {1,1,2,2,2,3,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int size = removeDuplicates(arr, n);
  cout<<"The array after removing duplicate elements is ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}
