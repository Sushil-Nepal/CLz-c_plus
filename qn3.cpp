#include<iostream>
#include<cmath>
using namespace std;
class Cordinate{
    int x,y,z;
    float dis;
    public:
    Cordinate();
    Cordinate(int x,int y,int z);
    void calDis();
    void display();
};
int main(){
    Cordinate c(1,2,3);
    c.display();
    c.calDis();
    return 0;
}
Cordinate::Cordinate(int x,int y,int z){
    this->x=x;
    this->y=y;
    this->z=z;
}
void Cordinate::display(){
    cout<<"Cordinate is :("<<x<<","<<y<<","<<z<<")"<<endl;
}
void Cordinate::calDis(){
    dis=sqrt(x*x+y*y+z*z);
    cout<<"Distance from origin:"<<dis;
} 