//EXPERIMENT 8: MULTIPLIES TWO COMPLEX NUMBERS
#include <iostream>
using namespace std;

class complex {
    float r;
    float i;
    public:
    complex() {                                                            //Default constructor for initialization
        cout << "Enter Real part and Imaginary part of complex number : ";
        cin >> r >> i;
    }

    complex(float r, float i){                                             //Parameterized constructor to store complex
        this->r = r;
        this->i = i;
    }

    inline friend void multiplication(complex *c1, complex *c2);
};

void multiplication(complex *c1, complex *c2) {                            //Complex multiplication function
    float real = c1->r * c2->r - c1->i * c2->i;
    float imag = c1->r * c2->i + c1->i * c2->r;
    complex c3(real, imag);
    cout << "Multiplication of complex numbers is : " << c3.r << " + " << c3.i << "i" << endl;
}

int main() {
    complex c1, c2;
    multiplication(&c1, &c2);
    return 0;
}