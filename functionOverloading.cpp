#include<iostream>
using namespace std;
float area(float r){
    cout<<"Area of Circle:";
    return 3.14*r*r; // area of circle
}
float area(float l, float b){
    cout<<"Area of Rectangle:";
    return l*b; // area of rectangle
}
float area(double a){
    cout<<"Area of Cube:";
    return 6*a*a; // area of Cube
}
float area(double r, double h){
    cout<<"area of Cylinder:";
    return 2*3.14*r*h + 2*3.14*r*r; // area of cylinder
}
int main(){
    int ch;
    float l,r1,b,tsa;
    double a,h,r2;
    cout<<"Choose the shape to find area:\n1.Circle\n2.Rectangle\n3.Cube\n4.Cylinder\n5.Exit\n";
    cin>>ch;
    switch(ch){
        case 1:
            cout<<"Enter radius of circle:";
            cin>>r1;
            cout<<area(r1)<<endl;
            break;
        case 2:
            cout<<"Enter length and breadth of rectangle:";
            cin>>l>>b;
            cout<<area(l,b)<<endl;
            break;
        case 3:
            cout<<"Enter side of cube:";
            cin>>a;
            cout<<area(a)<<endl;
            break;
        case 4:
            cout<<"Enter radius and height of cylinder:";
            cin>>r2>>h;
            cout<<area(r2,h)<<endl;
            break;
        case 5:
            exit(0);
        default:
            cout<<"Invalid choice!";
    }
}