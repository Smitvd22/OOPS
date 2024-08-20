//EXPERIMENT 6: TOPPER MARKS CALCULATOR
#include<iostream>
using namespace std;

class ai {
    int* roll;
    int* marks;
    int students;
public:
    void getdata() {                                //Function to get data of student
        cout << "Enter number of students: ";
        cin >> students;
        roll = new int[students];
        marks = new int[students];
        for (int i = 0; i < students; i++) {
            cout << "Enter roll no. and marks: ";
            cin >> roll[i] >> marks[i];
        }
    }
    void topper() {                                 //Function to tell about topper
        int max = 0;
        int rollno = 0;
        for (int i = 0; i < students; i++) {
            if (marks[i] > max) {
                max = marks[i];
                rollno = roll[i];
            }
        }
        cout << "Topper's roll: " << rollno << endl;
        cout << "Topper's marks: " << max << endl;
    }
};

int main() {
    ai a;
    a.getdata();
    a.topper();
    return 0;
}