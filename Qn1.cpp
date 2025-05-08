#include <iostream>
using namespace std;
class Rational{
    int c,d;
    public:
        void Rational(int num,int dum);
        void display();
        void asReal();
        void inVert();
};
int main(){
    Rational x(22,7);
    x.display();
    cout<<"real Number"<<endl;
    x.asReal();
    cout<<"Inverted:"<<endl;
    x.inVert();
    x.display();
    x.asReal();
    return 0;
}
Rational::Rational(int num,int dum){
    c=num;
    d=dnum;
}
void Rational::setVal(){
    cout<<"Enter a numerator:";
    cin>>c;
    cout<<"Enter a dumerator:";
    cin>>d;
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