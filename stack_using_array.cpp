#include<iostream>

using namespace std;

class stack{

int size;

int * arr;

int top;


public:

stack(){

size = 10;

arr= new int[size];

top = -1;

}


void push(int element){

if(top == size){

cout<<"Cannot insert!";

}

else{

top++;

arr[top]=element;


}

}


int pop(){

if(top==-1)

{

return 0 ;

}

else{

int x = arr[top];

top -- ;

return x;

}

}


int givetop(){

return arr[top];

}


};

int main(){

stack s;

s.push(3);

s.push(5);

s.push(6);

cout<<"Top: "<<s.givetop();

s.pop();

cout<<"Top: "<<s.givetop();



return 0;

}
