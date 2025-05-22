#include<iostream>
using namespace std;
class Num1;
class Num2;
class Num3;
int max(Num1,Num2,Num3);
void input();
class Num1{
	int num1;
	public:
		Num1();
		friend int max(Num1 num1,Num2 num2,Num3 num3);
};
class Num2{
	int num2;
	public:
		Num2();
		friend int max(Num1 num1,Num2 num2,Num3 num3);
};
class Num3{
	int num3;
	public:
		Num3();
		friend int max(Num1 num1,Num2 num2,Num3 num3);
	
};
Num1::Num1(){
	cout<<"enter a Number:";
	cin>>num1;
}
Num2::Num2(){
	cout<<"enter a Number:";
	cin>>num2;
}
Num3::Num3(){
	cout<<"enter a Number:";
	cin>>num3;
}
int max(Num1 n1,Num2 n2,Num3 n3){
	if(n1.num1>n2.num2&&n1.num1>n3.num3){
		return n1.num1;
	}else if(n2.num2>n3.num3){
		return n2.num2;
	}else{
		return n3.num3;
	}
}
int main(){
	Num1 n1;
	Num2 n2;
	Num3 n3;
	int maxNum;
	maxNum=max(n1,n2,n3);
	cout<<"Max is"<<maxNum;
	return 0;
}

