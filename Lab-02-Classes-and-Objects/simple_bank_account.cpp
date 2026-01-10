
//Program: Simple Bank Account
//Author: Muhammad Abu Bakar Baig
//Description: This program demonstrates the use of classes and objects to manage a bank account with deposit, withdraw, and display functions.


#include<iostream>
using namespace std;
class BankAccount{
private:
    int acc_no;
    string name;
    double balance;

public:
    void setData(){
        
        cout<<"Enter account number: ";
        cin>>acc_no;
        
        cin.ignore(); // ignore newline before reading name
        cout<<"Enter account holder name: ";
        getline(cin, name); // allows full name
        
        cout<<"Enter initial balance: ";
        cin>>balance;
    }

    void deposit(double amount){
        balance+=amount;
        cout<<"Deposited: "<<amount<<endl;
    }

    void withdraw(double amount){
        if (amount>balance)
            cout<<"Insufficient balance"<<endl;
        else {
            balance-=amount;
            cout<<"Withdrawn: "<<amount<<endl;
        }
    }

    void display(){
    	cout<<endl;
        cout<<"Account Number: "<<acc_no<<endl;
        cout<<"Account Holder: "<<name <<endl;
        cout<<"Current Balance: "<<balance<<endl;
    }
};

int main(){
    BankAccount acc;
    acc.setData();

    acc.deposit(500);
    acc.withdraw(200);

    acc.display();
    return 0;
}
