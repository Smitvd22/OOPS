//EXPERIMENT 4: BANK ACCOUNT
#include <iostream>
using namespace std;

class bank{
    string name;
    long int acct_no;
    string acct_type;
    long int balance;
    public:
    bank(){                                              //Constructor to initialize data
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Account Number: ";
        cin>>acct_no;
        cout<<"Enter Account type: ";
        cin>>acct_type;
        cout<<"Enter Balance in account: ";
        cin>>balance;
    }
    void account_display(){                              ///Function to display account details
        cout<<"Name of account holder: "<<name<<endl;
        cout<<"Account Number: "<<acct_no<<endl;
        cout<<"Account type: "<<acct_type<<endl;
        cout<<"Balance in the account now is: "<<balance<<endl;
    }
    void deposit(){                                     //Function to deposit money
        int d;
        cout<<"Money in account : "<<balance<<endl;
        cout<<"Enter the amount to be deposit : ";
        cin>>d;
        balance = balance + d;
        cout<<"Money in account after depositing : "<<balance<<endl<<"ACCOUNT DETAILS"<<endl;
        account_display();
    }
    void withdraw(){                                    //Function to withdraw money
        int w;
        cout<<"Money in account : "<<balance<<endl;
        cout<<"Enter the amount to withdraw : ";
        cin>>w;
        if(w>balance){
            cout<<"Insufficient balance"<<endl;
        }
        else{
            balance = balance - w;
            cout<<"Money in account after withdrawing : "<<balance<<endl<<"ACCOUNT DETAILS"<<endl;
        }
        account_display();
    }
};
int main(){
    bank b;
    b.deposit();
    b.withdraw();
    return 0;
}