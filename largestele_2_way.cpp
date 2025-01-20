#include<iostream>
#include<vector>
#include<algorithm>  // For sort() function
#include<climits>    // For INT_MIN and INT_MAX
using namespace std;
 
int largest_ele(vector<int>& array, int n) {
 
  int max_ele = array[0];
  for (int i = 0; i < n; i++) {
    if (max_ele < array[i]) {
      max_ele = array[i];
    }
  }
  return max_ele;
}
int main() {
    vector<int> array1;
    int n,a;
    cout<<"Enter the size of the array";
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        array1.push_back(a);
    }
    int max = largest_ele(array1, n);
    cout<<"The largest element in the array is: "<<max<<endl;
    return 0;
}
