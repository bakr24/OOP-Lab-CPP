// Topic: C++ Basics
// Task: Simple Calculator with user choice
// Author: Abu Bakar Baig

#include<iostream>
using namespace std;

// Functions for each operation
float add(float a, float b){
    return a+b;
}

float subtract(float a, float b){
    return a-b;
}

float multiply(float a,float b){
    return a*b;
}

float divide(float a,float b){
    if (b!=0)
        return a/b;
    else{
        cout<<"Cannot divide by zero!"<<endl;
        return 0;
    }
}

int main(){
    float a,b;
    int choice;

    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    cout<<endl;
    cout<<" Select operation: "<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"Enter your choice (1-4): ";
    cin>>choice;
    cout<<endl;
    cout<<"Result: ";

    if(choice==1)
        cout<<add(a,b)<<endl;
    else if(choice==2)
        cout<<subtract(a,b)<<endl;
    else if(choice==3)
        cout<<multiply(a,b)<<endl;
    else if(choice==4)
        cout<<divide(a,b)<<endl;
    else
        cout<<"Invalid choice"<<endl;

    return 0;
}
