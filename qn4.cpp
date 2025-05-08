#include<iostream>
#include<cmath>
using namespace std;
class Cordinate{
    int x,y,z;
    float dis;
    public:
    Cordinate();
    void calDis();
    void display();
};
int main(){
    Cordinate c;
    c.display();
    c.calDis();
    return 0;
}
Cordinate::Cordinate(){
    this->x=1;
    this->y=2;
    this->z=3;
}
void Cordinate::display(){
    cout<<"Cordinate is :("<<x<<","<<y<<","<<z<<")"<<endl;
}
void Cordinate::calDis(){
    dis=sqrt(x*x+y*y+z*z);
    cout<<"Distance from origin:"<<dis;
} 