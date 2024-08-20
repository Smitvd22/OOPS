//EXPERIMENT 3: DATE CONSTRUCTOR
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Data {
    int day;
    int month;
    int year;
    public:
        Data(){                                // Default Constructor
        day = 12;
        month = 3;
        year = 1993;
        }

        Data(int day, int month, int year){    // Parametrized Constructor
            this->day = day;
            this->month = month;
            this->year = year;
        }

        Data(Data &d){                         // Copy Constructor
            day = d.day;
            month = d.month;
            year = d.year;
        }

        void show(){
        cout << "Day: " << day << ", Month: " << month << ", Year: " << year << endl;
        }
};

int main() {
    // Default Constructor called
    Data d1;
    d1.show();

    // Parametrized Constructor called
    Data d2(19, 9, 2004);
    d2.show();

    // Copy Constructor called
    Data d3(d2);
    d3.show();
    return 0;
}