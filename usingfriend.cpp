#include<iostream>
using namespace std;
class Complex;
Complex operator +(Complex &c1,Complex &c2);
class Complex{
    int real,img;
    public:
        Complex(){
            real=0;
            img=0;
        }
        Complex(int r, int i){
            real=r;
            img=i;
        }
        friend Complex operator +(Complex &c1,Complex &c2);
        void display(){
            cout<<"Complex Number is:"<<real<<"+i"<<img<<endl;
        }
};
Complex operator +(Complex &c1,Complex &c2){
            Complex ctemp;
                ctemp.real=c2.real+c1.real;
                ctemp.img=c2.img+c1.img;
                return ctemp;
        }
int main(){
    Complex c1(10,20),c2(20,30);
    c1.display();
    c2.display();
    Complex c3;
    c3=c1+c2;
    c3.display();
    return 0;
}