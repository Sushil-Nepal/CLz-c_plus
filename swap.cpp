#include<iostream> 
using namespace std;
void swap(int &a,int &b){
	int t;
	t=a;
	a=b;
	b=t;
}
int main(){
	int a,b;
	cout<<"Enter a Two Numbers:";
	cin>>a>>b;
	cout<<"Before  swap a="<<a<<"b="<<b;
	swap(a,b);
	cout<<"After a swap a="<<a<<"b="<<b;
	return 0;
}
	
	
	
