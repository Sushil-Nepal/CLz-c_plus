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
        Complex operator -(){
            Complex ctemp;
                ctemp.real=-real;
                ctemp.img=-img;
                return ctemp;
        }
        void diaplay(){
            cout<<"Complex Number is:"<<real<<"+i"<<img<<endl;
        }
};
int main(){
    Complex c2(20,30);
    c2.diaplay();
    Complex c3;
    c3=-c2;
    c3.diaplay();
    return 0;
}