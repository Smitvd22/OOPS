//EXPERIMENT 3: BOOK COUNT AND EBOOK TIME
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct book{                                                    //derived structure
    int count;                                        
    void getData(){                                             //function to get data
        cout << "Enter the number of pages of the book:";
        cin >> count;
    }
    void displayData(){                                         //function to display data
        cout << "The number of pages of the book is : " << count<<endl;
    }
};

struct ebook{                                                   //derived structure
    int time;
    void getData(){                                              //function to get data
        cout << "The Playing time is : ";
        cin >> time;
    }
    void displayData(){                                          //function to display data
        cout << "The number of pages of the book is : " << time;
    }
};

struct Publication{
    string title,name;
    float price;
    book b;                                                       //Structure under structure
    ebook eb;
    
};


int main(){
    Publication p;
    p.name = "ABC";
    p.title = "SMIT";
    p.price = 567;
    p.b.getData();
    p.eb.getData();

    cout << "The name of the book's author is :"<<p.name<<endl;
    cout << "The name of title of book is :"<<p.title<<endl;
    cout << "The price of book is :"<<p.price<<endl;

    p.b.displayData();
    p.eb.displayData();
}