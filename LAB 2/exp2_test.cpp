// EXPERIMENT 2: DUE DATE CALCULATOR
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Library
{
public:
    int d, m, y, t, nd, nm, ny;
    void GetInput()
    {
        cout << "Enter the date on which borrowed (DD): ";
        cin >> d;
        cout << "Enter the month on which borrowed (MM): ";
        cin >> m;
        cout << "Enter the year on which borrowed (YYYY): ";
        cin >> y;
        cout << "Enter the number of days for which borrowed (book can be borrowed upto 90 days) : ";
        cin >> t;
        if (d >= 31){
            cout << "Invalid input";
            exit(0);
        }
        if (m >= 12){
            cout << "Invalid input";
            exit(0);
        }
        if (t >= 90){
            cout << "Invalid input";
            exit(0);
        }
        else{
            cout << "The date entered is: " << d << "-" << m << "-" << y << endl;
        }
    }
    inline int DueDate();
};

int Library ::DueDate()
{
    if ((y%4==0 && y%100!=0) || y%400==0){
        switch (m)
        {
        case 1:
        if(t+d>=31 && t+d<60){
            nd = d+t-31;
            nm = m+1;
            ny = y;
        }
        if(t+d>=60 && t+d<91){
            nd = d+t-60;
            nm = m+2;
            ny = y;
        }
        if(t+d>=91){
            nd = d+t-91;
            nm = m+3;
            ny = y;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;

        case 2:
        if(t+d>=29 && t+d<60){
            nd = d+t-29;
            nm = m+1;
            ny = y;
        }
        if(t+d>=60 && t+d<90){
            nd = d+t-60;
            nm = m+2;
            ny = y;
        }
        if(t+d>=90){
            nd = d+t-90;
            nm = m+3;
            ny = y;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;

        case 3:
        if(t+d>=31 && t+d<61){
            nd = d+t-31;
            nm = m+1;
            ny = y;
        }
        if(t+d>=61 && t+d<92){
            nd = d+t-61;
            nm = m+2;
            ny = y;
        }
        if(t+d>=92){
            nd = d+t-92;
            nm = m+3;
            ny = y;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;

        case 4:
        if(t+d>=30 && t+d<61){
            nd = d+t-30;
            nm = m+1;
            ny = y;
        }
        if(t+d>=61 && t+d<91){
            nd = d+t-61;
            nm = m+2;
            ny = y;
        }
        if(t+d>=91){
            nd = d+t-91;
            nm = m+3;
            ny = y;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;
        
        case 5:
        if(t+d>=31 && t+d<61){
            nd = d+t-31;
            nm = m+1;
            ny = y;
        }
        if(t+d>=61 && t+d<92){
            nd = d+t-61;
            nm = m+2;
            ny = y;
        }
        if(t+d>=92){
            nd = d+t-92;
            nm = m+3;
            ny = y;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;
        
        case 6:
        if(t+d>=30 && t+d<61){
            nd = d+t-30;
            nm = m+1;
            ny = y;
        }
        if(t+d>=61 && t+d<92){
            nd = d+t-61;
            nm = m+2;
            ny = y;
        }
        if(t+d>=92){
            nd = d+t-92;
            nm = m+3;
            ny = y;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;
        
        case 7:
        if(t+d>=31 && t+d<62){
            nd = d+t-31;
            nm = m+1;
            ny = y;
        }
        if(t+d>=62 && t+d<92){
            nd = d+t-62;
            nm = m+2;
            ny = y;
        }
        if(t+d>=92){
            nd = d+t-92;
            nm = m+3;
            ny = y;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;
        
        case 8:
        if(t+d>=31 && t+d<61){
            nd = d+t-31;
            nm = m+1;
            ny = y;
        }
        if(t+d>=61 && t+d<92){
            nd = d+t-61;
            nm = m+2;
            ny = y;
        }
        if(t+d>=92){
            nd = d+t-92;
            nm = m+3;
            ny = y;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;
        
        case 9:
        if(t+d>=30 && t+d<61){
            nd = d+t-30;
            nm = m+1;
            ny = y;
        }
        if(t+d>=61 && t+d<91){
            nd = d+t-61;
            nm = m+2;
            ny = y;
        }
        if(t+d>=91){
            nd = d+t-91;
            nm = m+3;
            ny = y;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;

        case 10:
        if(t+d>=31 && t+d<61){
            nd = d+t-31;
            nm = m+1;
            ny = y;
        }
        if(t+d>=61 && t+d<92){
            nd = d+t-61;
            nm = m+2;
            ny = y;
        }
        if(t+d>=92){
            nd = d+t-92;
            nm = m+3;
            ny = y+1;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;

        case 11:
        if(t+d>=30 && t+d<61){
            nd = d+t-30;
            nm = m+1;
            ny = y;
        }
        if(t+d>=61 && t+d<92){
            nd = d+t-61;
            nm = m+2;
            ny = y+1;
        }
        if(t+d>=92){
            nd = d+t-92;
            nm = m+3;
            ny = y+1;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;

        case 12:
        if(t+d>=31 && t+d<62){
            nd = d+t-31;
            nm = m+1;
            ny = y+1;
        }
        if(t+d>=62 && t+d<90){
            nd = d+t-62;
            nm = m+2;
            ny = y+1;
        }
        if(t+d>=90){
            nd = d+t-92;
            nm = m+3;
            ny = y+1;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;
        
        default:
            break;
        }
    }
    else{
        switch (m)
        {
        case 1:
        if(t+d>=31 && t+d<59){
            nd = d+t-31;
            nm = m+1;
            ny = y;
        }
        if(t+d>=59 && t+d<90){
            nd = d+t-59;
            nm = m+2;
            ny = y;
        }
        if(t+d>=90){
            nd = d+t-90;
            nm = m+3;
            ny = y;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;

        case 2:
        if(t+d>=28 && t+d<59){
            nd = d+t-28;
            nm = m+1;
            ny = y;
        }
        if(t+d>=59 && t+d<89){
            nd = d+t-59;
            nm = m+2;
            ny = y;
        }
        if(t+d>=89){
            nd = d+t-89;
            nm = m+3;
            ny = y;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;

        case 3:
        if(t+d>=31 && t+d<61){
            nd = d+t-31;
            nm = m+1;
            ny = y;
        }
        if(t+d>=61 && t+d<92){
            nd = d+t-61;
            nm = m+2;
            ny = y;
        }
        if(t+d>=92){
            nd = d+t-92;
            nm = m+3;
            ny = y;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;

        case 4:
        if(t+d>=30 && t+d<61){
            nd = d+t-30;
            nm = m+1;
            ny = y;
        }
        if(t+d>=61 && t+d<91){
            nd = d+t-61;
            nm = m+2;
            ny = y;
        }
        if(t+d>=91){
            nd = d+t-91;
            nm = m+3;
            ny = y;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;
        
        case 5:
        if(t+d>=31 && t+d<61){
            nd = d+t-31;
            nm = m+1;
            ny = y;
        }
        if(t+d>=61 && t+d<92){
            nd = d+t-61;
            nm = m+2;
            ny = y;
        }
        if(t+d>=92){
            nd = d+t-92;
            nm = m+3;
            ny = y;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;
        
        case 6:
        if(t+d>=30 && t+d<61){
            nd = d+t-30;
            nm = m+1;
            ny = y;
        }
        if(t+d>=61 && t+d<92){
            nd = d+t-61;
            nm = m+2;
            ny = y;
        }
        if(t+d>=92){
            nd = d+t-92;
            nm = m+3;
            ny = y;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;
        
        case 7:
        if(t+d>=31 && t+d<62){
            nd = d+t-31;
            nm = m+1;
            ny = y;
        }
        if(t+d>=62 && t+d<92){
            nd = d+t-62;
            nm = m+2;
            ny = y;
        }
        if(t+d>=92){
            nd = d+t-92;
            nm = m+3;
            ny = y;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;
        
        case 8:
        if(t+d>=31 && t+d<61){
            nd = d+t-31;
            nm = m+1;
            ny = y;
        }
        if(t+d>=61 && t+d<92){
            nd = d+t-61;
            nm = m+2;
            ny = y;
        }
        if(t+d>=92){
            nd = d+t-92;
            nm = m+3;
            ny = y;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;
        
        case 9:
        if(t+d>=30 && t+d<61){
            nd = d+t-30;
            nm = m+1;
            ny = y;
        }
        if(t+d>=61 && t+d<91){
            nd = d+t-61;
            nm = m+2;
            ny = y;
        }
        if(t+d>=91){
            nd = d+t-91;
            nm = m+3;
            ny = y;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;

        case 10:
        if(t+d>=31 && t+d<61){
            nd = d+t-31;
            nm = m+1;
            ny = y;
        }
        if(t+d>=61 && t+d<92){
            nd = d+t-61;
            nm = m+2;
            ny = y;
        }
        if(t+d>=92){
            nd = d+t-92;
            nm = m+3;
            ny = y+1;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;

        case 11:
        if(t+d>=30 && t+d<61){
            nd = d+t-30;
            nm = m+1;
            ny = y;
        }
        if(t+d>=61 && t+d<92){
            nd = d+t-61;
            nm = m+2;
            ny = y+1;
        }
        if(t+d>=92){
            nd = d+t-92;
            nm = m+3;
            ny = y+1;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
            break;

        case 12:
        if (((y+1)%4==0 && (y+1)%100!=0) || (y+1)%400==0){
            if(t+d>=31 && t+d<62){
            nd = d+t-31;
            nm = m+1;
            ny = y+1;
        }
        if(t+d>=62 && t+d<91){
            nd = d+t-62;
            nm = m+2;
            ny = y+1;
        }
        if(t+d>=91){
            nd = d+t-91;
            nm = m+3;
            ny = y+1;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
        }
        else{
            if(t+d>=31 && t+d<62){
            nd = d+t-31;
            nm = m+1;
            ny = y+1;
        }
        if(t+d>=62 && t+d<90){
            nd = d+t-62;
            nm = m+2;
            ny = y+1;
        }
        if(t+d>=90){
            nd = d+t-90;
            nm = m+3;
            ny = y+1;
        }
        else{
            nd = d+t;
            nm = m;
            ny = y;
        }
        }
            break;
        
        default:
            break;
        }
    }
    cout << "The due date is: " << nd << "-" << nm << "-" << ny;
    return 0;
}

int main()
{
    Library l;
    l.GetInput();
    l.DueDate();
    return 0;
}