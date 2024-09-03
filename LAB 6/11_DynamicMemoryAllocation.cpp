//EXPERIMENT 11: DYNAMICALLY ALLOCATES MEMORY WITH NEW OPERATOR AND DELETES WITH DELETE OPERATOR KEY WORDS
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Dynamic{
    int *ptr;                                  //Array created
    int size;
    public:
    Dynamic(int size){                         //Constructor
        this->size = size;
        ptr = new int[size];                   //new used to allocate extra memory
    }
    void getdata(){                            //Gets data to fill the array
        for(int i=0;i<size;i++){
            cin>>ptr[i];
        }
    }
    void display(){                            //Function to display data
        for(int i=0;i<size;i++){
            cout<<ptr[i]<<" ";
        }
    }
    ~Dynamic(){                               //Destructor
        delete[] ptr;                         //delete for freeing up memory allocated
        cout<<"\nMemory Deallocated";
    }
};

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    Dynamic d(size);
    d.getdata();
    d.display();
    return 0;
}