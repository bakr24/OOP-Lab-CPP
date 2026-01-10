//Program: Temperature Conversion
//Author: Muhammad Abu Bakar Baig
//Description: This program demonstrates the use of classes and objects 
//             to convert a temperature from Celsius to Fahrenheit and Kelvin.


#include<iostream>
using namespace std;

class Temperature{
private:
    float celsius;
public:
    void setCelsius(){
        cout<<"Enter temperature in Celsius: ";
        cin>>celsius;
    }

    void toFahrenheit(){
        cout<<"Fahrenheit: "<<(celsius*9/5)+32<<"F"<<endl;
    }

    void toKelvin(){
        cout<<"Kelvin: "<<celsius+273.15<<"K"<<endl;
    }

    void display(){
    	cout<<endl;
    	cout<<"Temperature Conversion"<<endl;
        cout<<"Celsius: "<<celsius<<"C"<<endl;
        toFahrenheit();
        toKelvin();
    }
};

int main() {
    Temperature temp;
    temp.setCelsius();
    temp.display();
    return 0;
}
