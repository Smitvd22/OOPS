//EXPERIMENT 3: INCOME TAX CALCULATOR
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Tax{                                       
    string name;
    float income;
    float tax;
    public:
    void Input(){                                  //Input initialising function
        cout << "ENTER NAME : ";
        cin >> name;
        cout << "ENTER INCOME : ";
        cin >> income;
    }
    void ComputeTax(){                            //Tax computing function
        if(income<=100000){
            tax = 0;
        }
        else if(income>100000 && income <= 150000){
            tax = (income - 100000)*0.1;
        }
        else if(income>150000 && income <= 200000){
            tax = (income-150000)*0.2;
        }
        else if(income>200000){
            tax = (income-200000)*0.3;
        }
    } 
    void outut(){                                 //Output displaying function
        ComputeTax();
        cout << "Name: "<< name <<endl;
        cout << "The tax to be paid is : " << tax;
    }
};

int main (){
    Tax t;
    t.Input();
    t.outut();
}