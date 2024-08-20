//EXPERIMENT 5: CALL BY METHODS IN CALCULATOR
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class calculator{
    int a,b;
    public:
    void getdata(){
        cout<<"Enter two numbers: ";
        cin>>a>>b;
    }
    void add(calculator c){                //call by value
        int result = c.a+c.b;
        cout<<"Addition: "<<result<<endl;
    }
    void sub(calculator *c){              //call by reference
        int result = c->a-c->b;
        cout<<"Subtraction: "<<result<<endl;
    }
    void mul(calculator &c){              //call by adress
        int result = c.a*c.b;
        cout<<"Multiplication: "<<result<<endl;
    }   
};

int main(){
    calculator c;
    c.getdata();
    c.add(c);
    c.sub(&c);
    c.mul(c);
    return 0;
}
