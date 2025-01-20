#include<iostream>
#include<vector>
#include<algorithm> 
#include<climits>    
using namespace std;

void isPalindrome(string str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    if (str == rev)
        cout<<str<<"is palindrome."<<endl;
    else
        cout<< str<<"is NOT palindrome." << endl;
}

int main() {
    isPalindrome("ABCDCBA");
    isPalindrome("ABCD");
    return 0;
}
