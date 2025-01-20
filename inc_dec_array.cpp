#include<iostream>
#include<vector>
#include<algorithm> 
#include<climits>    
using namespace std;
int main(){
    vector<int> array1;
    int n,a;
    cout<<"Enter the size of the array";
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        array1.push_back(a);
    }
    sort(array1.begin(), array1.end());
	for (int i=0; i<n/2; i++) {
		cout<<array1[i]<<" ";
	}
	for (int i=n-1; i>=n/2; i--) {
		cout<<array1[i]<<" ";
    }
    return 0;
}
