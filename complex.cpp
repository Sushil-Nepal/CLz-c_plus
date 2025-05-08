#include<iostream>
#include<cmath>
using namespace std;
class Complex{
	float real,img;
	float angle=0,polar=0;
	public:
	void input();
	void dispaly();
	void addCom(Complex c1,Complex c2);
	void subCom(Complex c1,Complex c2);
	void conCom();
	void mulCom(Complex c1,Complex c2);
};
int main(){
	Complex c1,c2,c;
	int ch;
	cout<<"Chosse Your mode og operation:"<<endl;
	cout<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl;
	cout<<"4.Polar form"<<endl;
	cin>>ch;
	switch(ch){
		case 1:
			c1.input();
			c2.input();
			c.addCom(c1,c2);
			c.conCom();
			cout<<"Addition of Complex number is:";
			c.dispaly();
			break;
		case 2:
			c1.input();
			c2.input();
			c.subCom(c1,c2);
			cout<<"Subtraction of Complex number is:";
			c.conCom();
			c.dispaly();
			break;
		case 3:
			c1.input();
			c2.input();
			c.mulCom(c1,c2);
			cout<<"Multiplication of Complex number is:";
			c.conCom();
			c.dispaly();
			break;
		case 4:
			c1.input();
			cout<<"Polar form of Complex number is:";
			c.conCom();	
			c.dispaly();
		default:
			cout<<"Invalid choice"<<endl;
			break;
	}
	return 0;
	
}
void Complex::input(){
	cout<<"Enter  a Comlex :"<<endl<<"RealPart:";
	cin>>real;
	cout<<"Imaginary Part:";
	cin>>img;
}
void  Complex::dispaly(){
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
	cout<<endl<<"In Polar form:";
	cout<<polar<<"<"<<angle;
}
void Complex::addCom(Complex c1,Complex c2){
	real=c1.real+c2.real;
	img=c1.img+c2.img;
}
void Complex::subCom(Complex c1,Complex c2){
	real=c1.real+c2.real;
	img=c1.img+c2.img;
}
void Complex::conCom(){
	angle=57.2958*(atan2(img,real));
	polar=sqrt(img*img+real*real);
}
void Complex::mulCom(Complex c1,Complex c2){
	real=c1.real*c2.real-c1.img*c2.img;
	img=c1.real*c2.img+c1.img*c2.real;
	dispaly();
	conCom();	
}

