//EXPERIMENT 1 : CALCULATING LETTER PRICE
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Letter {
    float weight;

    float PriceCalculator(){ //calculates the price of the letter
    float total;             //logic
    if(weight<=50 && weight>0){
        total = weight * 0.05;
    }
    else if(weight<=150 && weight>50){
        total = ((weight - 50) * 0.04) + 2.5;
    }
    else if(weight<=400 && weight>150){
        total = ((weight - 150) * 0.025) + 2.5 + 4;
    }
    else if(weight>400){
        total = ((weight - 400) * 0.025) + 2.5 + 4 + 6.25;
    }
    return total;
}
};

int main(){
    Letter l;
    cout<<"Weight: "; //Takes input of weight
    cin >> l.weight;
    cout<<"The price is: "<<l.PriceCalculator(); //Displays the final output
}