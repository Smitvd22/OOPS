//EXPERIMENT 4: MARKS CALCULATOR WITH READ DATA AND SHOW DATA FUNCTIONS
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Student{
    int admno;
    char Name[20];
    float marksEng;
    float marksMaths;
    float marksSci;
    float total;

    float compute(){                           //Calculates total marks of student
        return marksEng+marksMaths+marksSci;
    }

    public:                                    
    void readData(){                            //Reads data of student
        cout<<"Admission No. : ";
        cin>>admno;
        cout<<"Name: ";
        cin>>Name;
        cout<<"English Marks: ";
        cin>>marksEng;
        cout<<"Maths Marks: ";
        cin>>marksMaths;
        cout<<"Science Marks: ";
        cin>>marksSci;
        cout<<"\nTotal Marks: "<<compute()<<endl;
    }

    void showData(){                             //Shows data of student
        cout<<admno<<endl;
        cout<<Name<<endl;
        cout<<"English Marks: "<<marksEng<<endl;
        cout<<"Maths Marks: "<<marksMaths<<endl;
        cout<<"Science Marks: "<<marksSci<<endl;
    }

};

int main()
{
    Student s;
    s.readData();
    s.showData();
    return 0;
}