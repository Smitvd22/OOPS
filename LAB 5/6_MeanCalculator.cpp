//EXPERIMENT 6: CALCULATES MEAN OF TWO NUMBERS FROM DIFFERENT CLASS
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    float a;
    A(){                                  //Construcctor for input 1
        cout<<"Enter 1st Number : ";       
        cin>>a;
    }
    friend class B;
};

class B{
    public:
    float b;
    B(){                                  //Construcctor for input 2
        cout<<"Enter 2nd Number : ";
        cin>>b;
    }
    friend void average(A&a , B&b);
};

void average(A&a , B&b){                  //Function to calculate mean
    float avg = (a.a + b.b)/2;
    cout<<"Mean Of Number is : "<<avg;
}

int main(){
A a;
B b;
average(a,b);
}