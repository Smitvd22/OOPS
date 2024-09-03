//EXPERIMENT 5: BOOK COUNT AND EBOOK TIME
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Publication{
    public:
    string title,name;
    float price;  
};

class book : public Publication{                                                     //derived structure
    public:                                                  
    int count;                                        
    void getData(){                                             //function to get data
        cout << "Enter the number of pages of the book:";
        cin >> count;
    }
    void displayData(){                                         //function to display data
        cout << "The number of pages of the book is : " << count<<endl;
    }
};

class ebook : public Publication{                                                   //derived structure
    public:
    int time;
    void getData(){                                              //function to get data
        cout << "The Playing time is : ";
        cin >> time;
    }
    void displayData(){                                          //function to display data
        cout << "The number of pages of the book is : " << time;
    }
};

int main(){
    book b;
    ebook eb;
    b.name = "ABC";
    b.title = "SMIT";
    b.price = 567;
    eb.name = "ABC";
    eb.title = "SMIT";
    eb.price = 567;
    b.getData();
    eb.getData();

    cout << "The name of the book's author is :"<<b.name<<endl;
    cout << "The name of title of book is :"<<b.title<<endl;
    cout << "The price of book is :"<<b.price<<endl;

    b.displayData();

    cout << "The name of the ebook's author is :"<<eb.name<<endl;
    cout << "The name of title of ebook is :"<<eb.title<<endl;
    cout << "The price of ebook is :"<<eb.price<<endl;

    eb.displayData();
}