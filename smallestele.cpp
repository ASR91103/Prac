#include<iostream>
#include<vector>
#include<algorithm>  // For sort() function
#include<climits>    // For INT_MIN and INT_MAX
using namespace std;
 
int sorting(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    return arr[0];
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
    cout<<"The smallest element in the array is: "<<sorting(array1)<<endl;
    return 0;
}
