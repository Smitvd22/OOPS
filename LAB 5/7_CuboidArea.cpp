//EXPERIMENT 7: CALCULATES CUBOID AREA AND COVERTS CUBOID INTO CUBE
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class cuboid{                                                       
    public:
    int l,b,h;
    cuboid(){                                                     //Constructor for input
        cout<<"Enter Length Breadth and Height Of the Cube : ";
        cin>>l>>b>>h;
    }
    void SurfaceArea(){
        cout<<"surface are of the cube is : "<<(2*l*b + 2*b*h + 2*l*h)<<endl;       //Calculates surface area
    }
    friend void converter(int l, int b, int h);
};

void converter(int l, int b, int h){                                              //Function to convert cuboid in cube
    int m = 0;
    m= min(min(l,b),h);
    cout<<"Cuboid converted in cube of length "<<m<< " with surface area : " << 6*m*m;
}

int main(){
    cuboid c;
    c.SurfaceArea();
    converter(c.l,c.b,c.h);
}