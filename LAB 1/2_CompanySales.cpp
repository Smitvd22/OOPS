//EXPERIMENT 2: COMPANY SALES
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Company {
    int m,n,p;               
    float Calculator(){ 
        float total;
        total = (n*0.95*1500 + m*0.9*200 + p*0.85*450);          //Calculates the final price
        total = total*1.1;
        return total;
    }
};

int main(){
    Company l;
    cout<<"Enter the number of miners : ";                        //Takes input of miners
    cin >> l.m;
    cout<<"Enter the number of toasters : ";                      //Takes input of toasters
    cin >> l.n;
    cout<<"Enter the number of fans : ";                          //Takes input of fans
    cin >> l.p;
    cout<<"The price to be paid is: "<<l.Calculator();            //Displays the final price
}