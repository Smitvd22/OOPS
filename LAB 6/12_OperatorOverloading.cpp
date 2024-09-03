//EXPERIMENT 12: OPERATOR OVERLOADING 1)>> FOR INPUT VECTOR 
//                                    2)<< FOR OUTPUT VECTOR 
//                                    3)+ FOR ADDITION OF TWO VECTORS 
//                                    4)- FOR SUBTRACTION OF VECTORS
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Vector{
private:
    int x, y, z;
    
public:
    friend void operator>>(istream &mycin, Vector &v1){                 // >> operator overloaded using friend
        mycin >> v1.x;
        mycin >> v1.y;
        mycin >> v1.z;
    }
    
    friend void operator<<(ostream &mycout, const Vector &v1){          // << operator overloaded using friend
        mycout << "(" << v1.x << ", " << v1.y << ", " << v1.z << ")";
    }
    
    Vector operator+(const Vector &v2){                                // + operator overloaded using simple function
        Vector result;
        result.x = this->x + v2.x;
        result.y = this->y + v2.y;
        result.z = this->z + v2.z;
        return result;
    }
    
    Vector operator-(const Vector &v2){                               // - operator overloaded using simple function 
        Vector result;
        result.x = this->x - v2.x;
        result.y = this->y - v2.y;
        result.z = this->z - v2.z;
        return result;
    }
};

int main(){
    Vector v1, v2, v3;
    
    cout << "Enter vector 1 (x y z): ";
    cin >> v1;
    
    cout << "Enter vector 2 (x y z): ";
    cin >> v2;
    
    cout << "Vector 1: ";
    cout << v1;
    cout<<endl;
    cout << "Vector 2: ";
    cout << v2;
    cout<<endl;
    v3 = v1 + v2;
    cout << "v1 + v2 = ";
    cout << v3;
    cout<<endl;
    v3 = v1 - v2;
    cout << "v1 - v2 = ";
    cout << v3;
    cout<<endl;
    return 0;
}