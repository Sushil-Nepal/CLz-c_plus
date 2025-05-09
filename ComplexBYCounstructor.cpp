// usig mcrounstructor
#include<iostream>
using namespace std;
class Complex{
	int real,img;
	public:
		Complex();
		Complex(int r,int i);
		void display();
		void addCom(Complex &c1,Complex &c2);		
};
int main(){
	Complex c1,c2,c(0,0);
	c.addCom(c1,c2);
	c.display();
}
Complex::Complex(int r,int i){
	real=r;
	img=i;
}
Complex::Complex(){
	cout<<"Enter  a Comlex :"<<endl<<"RealPart:";
	cin>>real;
	cout<<"Imaginary Part:";
	cin>>img;
}
void Complex::addCom(Complex &c1,Complex &c2){
	real=c1.real+c2.real;
	img=c1.img+c2.img;
}
void  Complex::display(){
	cout<<"Complex number is:";
	if(img!=0,real!=0){
		if(img>0){
			cout<<real<<"+i"<<img;
		}else{
			cout<<real<<"-"<<img;
		}
	}else{
		if(real!=0){
			cout<<real;
		}else if(img!=0){
			cout<<"i"<<img;
		}else{
			cout<<"0";
		}
	}
}
