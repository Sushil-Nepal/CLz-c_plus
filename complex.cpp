#include<iostream>
using namespace std;
class Complex{
	flaot real,img;
	dubble angle=0,ploar=0;
	public:
	void input();
	void dispaly();
	void addCom(Complex c1,Complex c2);
};
int main(){
	Complex c1,c2,c;
	c1.input();
	c2.input();
	c.addCom(c1,c2);
	c.dispaly();
	return 0;
	
}
void Complex::input(){
	cout<<"Enter  a Comlex :"<<endl<<"RealPart:";
	cin>>real;
	cout<<"Imaginary Part:";
	cin>>img;
}
void  Complex::dispaly(){
	if(img<0){
		cout<<real<<"+i"<<img;
	}else if(img==0){
		cout<<real;	
	}else{
		cout<<real<<"-"<<img;
	}
	if(img!=0,real!=0){
		
	}
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
	angle=atan2(c1.img, c2.real);
	polar=sqrt(img*img+real*real);
}
