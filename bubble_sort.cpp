#include <iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
   int arr[n] = {12,7,1,5,9};
   for(int i=0; i<n; i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   for(int i = 0; i <n-1; i++)
   {
       for(int j = 0; j < n-i-1; j++)
       {
           if(arr[j]>arr[j+1])
           {
               swap(arr[j],arr[j+1]);
           }
       }
   }
   for(int i=0; i<n; i++)
   {
       cout<<arr[i]<<" ";
   }
    return 0;
}
