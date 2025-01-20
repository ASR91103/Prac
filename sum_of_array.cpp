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
    int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (int)array1[i];
	}
	cout <<"The sum is: "<<sum;
    return 0;
}
