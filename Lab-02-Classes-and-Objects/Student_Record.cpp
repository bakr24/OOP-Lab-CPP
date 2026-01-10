
//Program: Student Record
//Author: Muhammad Abu Bakar Baig
//Description: This program demonstrates the use of classes and objects to store and display student information and calculate percentage.


#include<iostream>
using namespace std;

class Student{ //student is the class name
private: //access specifier
    string name; 
    int rollno;
    float marks;
    float totalMarks;

public: //access specifier
    void setData(){ //funtion in class/member function
        cout<<"Enter name: ";
        getline(cin,name); //display full name without terminating program
        cout<<"Enter roll number: ";
        cin>>rollno;
        cout<<"Enter marks: ";
        cin>>marks;
         cout<<"Enter total marks: ";
        cin>>totalMarks;
    }

    float calculatePercentage(){
        return (marks/totalMarks)*100; 
    }

    void display(){
    	cout<<endl;
        cout<<"Student Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"Percentage: "<<calculatePercentage()<<"%"<<endl;
    }
};

int main(){
    Student s1; //s1 is the object of class student
    s1.setData(); // calling setdata() funtion by object s1
    s1.display(); // calling display() funtion by object s1
    return 0;
}
