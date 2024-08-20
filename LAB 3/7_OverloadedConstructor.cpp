//EXPERIMENT 7: OVERLOADED CONSTRUCTOR
#include <iostream>
using namespace std;

class element
{
private:
    int *arr;
    int size = 0;

public:
    element()                                           //Default constructor
    {
        cout << "Default constructor for overloading ";
    }
    element(int size)                                   //Constructor overloaded with parameterising
    {
        this->size = size;
        arr = new int[size];
    }
    void getdata()                                      //Initialising data
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Enter element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }
    void largest()                                      //Function to find largest
    {
        int max = 0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        cout << "The largest number is : " << max << endl;
    }
};

int main()
{
    element e(5);
    e.getdata();
    e.largest();
    return 0;
}