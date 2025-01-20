#include<iostream>
#include<vector>
#include<algorithm> 
#include<climits>    
using namespace std;
 
void countFreq(vector<int>& arr, int n)
{
    vector<bool> visits(n, false); 
    for (int i = 0; i < n; i++) {
 
        if (visits[i] == true)
            continue;

        int count = 1;
        for (int j=i+1; j<n; j++) {
            if (arr[i] == arr[j]) {
                visits[j] = true;
                count++;
            }
        }
        cout<<arr[i]<<" "<<count<<endl;
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
    countFreq(array1,n);
    return 0;
}
