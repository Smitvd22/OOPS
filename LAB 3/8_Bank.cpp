//EXPERIMENT 8: BANK DEPOSIT AND WITHDRAW
#include <iostream>
using namespace std;

class bank{
    float money;
    public:
    bank(float money){                               //Constructor with money input
        this->money = money;
    }
    void deposit(){                                  //Function for depositing money
        int d;
        cout<<"Money in account : "<<money<<endl;
        cout<<"Enter the amount to deposit : ";
        cin>>d;
        money = money + d;
        cout<<"Money in account after depositing : "<<money<<endl;
    }
    void dwithdraw(){                                //Function for withdrawing money
        int w;
        cout<<"Money in account : "<<money<<endl;
        cout<<"Enter the amount to withdraw : ";
        cin>>w;
        if(w>money){                                 //Check condition
            cout<<"Insufficient balance"<<endl;
        }
        else{
            money = money - w;
            cout<<"Money in account after withdrawing : "<<money<<endl;
        }
    }
};
int main(){
    bank b(1000);
    b.deposit();
    b.dwithdraw();
    return 0;
}