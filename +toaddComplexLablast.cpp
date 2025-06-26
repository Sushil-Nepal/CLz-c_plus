#include<iostream>
using namespace std;
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
        Complex operator +(Complex &c){
            Complex ctemp;
                ctemp.real=real+c.real;
                ctemp.img=img+c.img;
                return ctemp;
        }
        void display(){
            cout<<"Complex Number is:"<<real<<"+i"<<img<<endl;
        }
};
int main(){
    Complex c1(10,20),c2(20,30);
    c1.display();
    c2.display();
    Complex c3;
    c3=c1+c2;
    c3.display();
    return 0;
}