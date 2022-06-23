#include<iostream>

//Macro
#define PI 3.14
#define AREA(l,b)(l*b)

using namespace std;

int main(){
    double r = 2.5;
    double area = PI*r*r;
    cout<<"Area is : "<<area<<endl;

    int l =10,b=15;
    area=AREA(l,b);
    cout<<"Area of a Rectangle is : "<<area<<endl;
    return 0;
}