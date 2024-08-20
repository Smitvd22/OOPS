//EXPERIMENT 2: CALL BILL CALCULATOR
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Bill{                                       
    string name;
    int calls;
    float bill;
    public:
    void Input(){                                  //Input initialising function
        cout << "ENTER NAME : ";
        cin >> name;
        cout << "ENTER NUMBER OF CALLS MADE : ";
        cin >> calls;
    }
    void ComputeBill(){                            //Bill generating function
        if(calls<=100){
            bill = 200;
        }
        else if(calls>100 && calls<=150){
            bill = (calls-100)*0.6 + 200;
        }
        else if(calls>150 && calls<=200){
            bill = (calls-150)*0.5 + 230;
        }
        else if(calls>200){
            bill = (calls-200)*0.4 + 255;
        }
    } 
    void outut(){                                 //Output displaying function
        ComputeBill();
        cout << name <<endl;
        cout << "The bill to be paid is : " << bill;
    }
};

int main (){
    Bill b;
    b.Input();
    b.outut();
}