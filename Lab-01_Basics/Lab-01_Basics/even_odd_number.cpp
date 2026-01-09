// Topic: C++ Basics
// Task: Check whether a number is even or odd using a function
// Author: Abu Bakar Baig

#include<iostream>
using namespace std;

//function 
bool isEven(int num) {
      return num%2==0;
}

int main() {
    int number;

    cout<<"Enter a number: ";
    cin>>number;

    cout<<endl;
    if (isEven(number))
        cout<<"The number "<<number<<" is even."<<endl;
    else
        cout<<"The number "<<number<<" is odd."<<endl;

    return 0;
}
