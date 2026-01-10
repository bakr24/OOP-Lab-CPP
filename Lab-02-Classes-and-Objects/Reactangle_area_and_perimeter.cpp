
//Program: Rectangle Area and Perimeter
//Author: Muhammad Abu Bakar Baig
//Description: This program demonstrates the use of classes and objects to calculate and display the area and perimeter of a rectangle



#include<iostream>
using namespace std;

class Rectangle{
private:
    float length, width;
public:
    void setData(){
        cout<<"Enter length: ";
        cin>>length;
        cout<<"Enter width: ";
        cin>>width;
    }

    void area(){
        cout<<"Area= "<<length*width<<endl;
    }

    void perimeter(){
        cout<<"Perimeter= "<<2*(length+width)<<endl;
    }

    void display(){
    	cout<<endl;
        cout<<"Rectangle Length: "<<length<<endl;
        cout<<"Rectangle Width: "<<width<<endl;
        area();       //calling area function
        perimeter();  //calling prints perimeter function
    }
};

int main() {
    Rectangle rect; //creating object rect for class rectangle
    rect.setData(); //calling function
    rect.display();
    return 0;
}
