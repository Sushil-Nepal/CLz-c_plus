#include<iostream>
using namespace std;
class Polygon{
    protected:
        int x,y;
    public:
        void input();
        void displayCordinate();
};
class Triangle:public Polygon{
    protected:
        float area;
    public:
        void calculate();
        void displayArea();
};
int main(){
    Triangle t1;
    t1.input();
    t1.displayCordinate();
    t1.calculate();
    t1.displayArea();
    return 0;
}
void Polygon::input(){
    cout<<"Enter a Cordinate(x,y):";
    cin>>x>>y;
}
void Polygon::displayCordinate(){
    cout<<"Cordinate(x,y):"<<"("<<x<<","<<y<<")"<<endl;
}
void Triangle::calculate(){
    area=0.5*x*y;
}
void Triangle::displayArea(){
    cout<<"Area of Triangle:"<<area;
}