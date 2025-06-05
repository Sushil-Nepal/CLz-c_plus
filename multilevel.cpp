// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
class Vehicle{
    protected:
        char com[20];
    public:
        void input(){
            cout<<"Enter a brand name:";
            cin>>com;
        }
        void display(){
            cout<<"Brand Name:"<<com<<endl;
        }
};
class Car:public Vehicle{
    protected:
        int speed;
    public:
        void displaySpeed(){
            cout<<"speed is:"<<speed<<"km/hr."<<endl;
        }
        void inputSpeed(){
            cout<<"Enter a speed in Km/hr.";
            cin>>speed;
        }
};
class EleCar:public Car{
    protected:
        int battery;
    public:
        void displayBat(){
            cout<<"Battery % is:"<<battery<<endl;
        }
        void inputBat(){
            cout<<"Enter a battter";
            cin>>battery;
        }
};
int main(){
    EleCar e;
        e.input();
        e.inputSpeed();
        e.inputBat();
        e.display();
        e.displaySpeed();
        e.displayBat();
    return 0;
}