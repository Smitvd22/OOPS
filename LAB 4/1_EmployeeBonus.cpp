//EXPERIMENT 1: EMPLOYEE BONUS
#include<iostream>
using namespace std;

class employee{
    string name;                                        //Class members
    float earning;
    float bonus;
    public:
    void input_data(){                                  //Function to initialise
        cout<<"Enter the name of Employee: "<<endl;
        cin>>name;
        cout<<"Enter the income of Employee:"<<endl;
        cin>>earning;
    }
    void bonus_calculator(){                           //Function to calculate bonus
        if(earning>2000){
            bonus = 0.1*earning;
        }
        else{
            cout<<"No bonus for you"<<endl;
        }
    }
    void show_data(){                                 //Function to display data
        cout<<"Name of Employee: "<<name<<endl;
        cout<<"Earning of Employee: "<<earning<<endl;
        cout<<"Bonus of Employee: "<<bonus<<endl;
    }
};

int main(){
    employee E;
    E.input_data();
    E.bonus_calculator();
    E.show_data();
}