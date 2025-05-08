#include <iostream>
using namespace std;
class Rational{
    int c,d;
    public:
        Rational();
        void display();
        void asReal();
        void inVert();
};
int main(){
    Rational x;
    x.display();
    cout<<"real Number"<<endl;
    x.asReal();
    cout<<"Inverted:"<<endl;
    x.inVert();
    x.display();
    x.asReal();
    return 0;
}
Rational::Rational(){
    c=22;
    d=7;
}
void Rational::display(){
    cout<<"Retional Number is:"<<c<<"/"<<d<<endl;
}
void Rational::asReal(){
    cout<<"Real NUmber of "<<c<<"/"<<d<<"is:"<<(float)c/d<<endl;
}
void Rational::inVert(){
    int temp;
    temp=c;
    c=d;
    d=temp;
}