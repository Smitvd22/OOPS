#include <iostream>
using namespace std;

class element
{
private:
    int *arr;
    int size = 0;

public:
    element()
    {
        cout << "Default constructor for overloading ";
    }
    element(int size)
    {
        this->size = size;
        arr = new int[size];
    }
    void getdata()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Enter element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }
    void largest()
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