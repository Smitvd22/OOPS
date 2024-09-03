//EXPERIMENT 9: SEARCHES EMPLOYEE WITH EMPLOYEE ID
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class employee{
    public:
    int emp_id,age;                                   //Members of class employee
    string emp_name;
    
    void getdata(){                                   //Function to get data
        cout<<"Enter Employee ID: ";
        cin>>emp_id;
        cout<<"Enter Employee Name: ";
        cin>>emp_name;
        cout<<"Enter Employee Age: ";
        cin>>age;
    }
    void searchdata(int s_id){                       //Function to print employee data if found
        if(s_id==emp_id){
            cout<<"\nEmployee ID Found";
            cout<<"\nEmployee ID: "<<emp_id;
            cout<<"\nEmployee Name: "<<emp_name;
            cout<<"\nEmployee Age: "<<age;
        }
    };
};

int main(){
    int n;
    cout<<"Enter number of employees: ";             //User input for number of employees
    cin>>n;
    employee employees[n];                          //array created in class
    
    for(int i = 0; i < n; i++){                     //Loop to get data of employees
        cout << "\nEnter details for Employee " << i+1 << ":\n";
        employees[i].getdata();
    }
    
    int s_id;
    cout<<"\nEnter Employee ID to be searched: ";
    cin>>s_id;
    
    bool found = false;
    for(int i = 0; i < n; i++){                   //Loop to search the employee id
        employees[i].searchdata(s_id);
        if(s_id == employees[i].emp_id){
            found = true;
            break;
        }
    }
    
    if(!found){
        cout<<"\nEmployee ID not found";
    }
    
    return 0;  
}