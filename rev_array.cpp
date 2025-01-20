#include<iostream>
#include<vector>
#include<algorithm>  // For sort() function
#include<climits>    // For INT_MIN and INT_MAX
using namespace std;
 
void reverseArray(vector<int>& arr, int n) {
   int res[n];
   for (int i=n-1; i>=0; i--) {
      res[n-i-1] = arr[i];
   }
   cout << "The array is:- " << endl;
   for (int i=0; i<n; i++) {
      cout << res[i] << " ";
   }
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
    reverseArray(array1,n);
    return 0;
}
