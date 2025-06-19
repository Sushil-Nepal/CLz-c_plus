#include<iostream>
using namespace std;
class University{
	protected:
		char name[30];
		int regNo;
		char address[20];
	public:
		  University(){}
		  Univerdity(int r, char n[30],char a[20]){
		  		regNo=r;
		  		strcpy(name,n);
		  		strcpy(address,a);
		  }
		 void display(){
		 	cout<<"University Name:"<<name<<endl<<"RegistrationNO:"<<regNo<<endl<<"Address:"<<address;
		 }
};
class Affiliated:public University{
	protected:
		char name[20];
		int cCode;
	public:
		Affiliated(){}
		Affiliated(char un[20] ,int r,char ad[20],char n[20],int c):University(un,ad,r){
			cCode=c;
			strcpy(name,n);	
		}
		void display(){
		 	cout<<"Collage Name:"<<name<<endl<<"Collage codeNO:"<<cCode;
		}
};
class Constitunt:public University{
	protected: 
		char name[20];
		int cCode;
	public:
		Affiliated(){}
		Affiliated(char un[20] ,int r,char ad[20],char n[20],int c):University(un,ad,r){
			cCode=c;
			strcpy(name,n);	
		}
		void display(){
		 	cout<<"Collage Name:"<<name<<endl<<"Collage codeNO:"<<cCode;
		}
};
class Department:public Affiliated,public Constitunt{
	protected:
		char name[20];
		int nostu;
	public:
		Department(){
		}
		Department(char un[20] ,int r,char ad[20],char n[20],int c,int n,char cn[20]){
			strcpy(name,n);
		}
		void display(){
			cout<<"Department Name:"<<name<<"No of Student"<<nostu;
		}
};
