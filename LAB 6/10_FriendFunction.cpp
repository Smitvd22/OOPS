//EXPERIMENT 10: FRIEND FUNCTION BOTH INLINE AND ANOTHER CLASS WITH POINTER TO ADDRESS
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class class_1{
    public:
    string name1;
    void display(){
        cout<<name1<<endl;
    }
};

class class_2{
    public:
    string name2;
    inline friend void exchange(class_1 &a,class_2 &b);   //Friend function using inline
    void display(){
        cout<<name2<<endl;
    }
};

void exchange(class_1 &a,class_2 &b){                     //Function to exchange name from the classes
    string temp=a.name1;
    a.name1=b.name2;
    b.name2=temp;
}

int main(){
    class_1 a;
    class_2 b;
    cout<<"Enter the name of the first person: ";
    cin>>a.name1;
    cout<<"Enter the name of the second person: ";
    cin>>b.name2;
    exchange(a,b);
    a.display();
    b.display();
    return 0;
}
