// WAP to find the circumference of a circle with radius 10 in C++?

#include<iostream>
using namespace std;

int main(){
    float radius;
    cout<<"Enter the radius of circle : ";
    cin>>radius;
    float pi = 3.141;
    float areaOfCicle = pi*pi*radius;
    cout<<"Area of Circle is "<<areaOfCicle<<endl;
    return 0;
}