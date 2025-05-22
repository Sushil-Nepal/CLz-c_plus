#include<iostream>
using namespace std;
class Mountain;
void max(Mountain m1,Mountain m2);
class Mountain{
	int height;
	char name[20];
	char address[20];
	public:
		Mountain();
		friend  void max(Mountain m1,Mountain m2);
		void dispaly();
};
void max(Mountain m1,Mountain m2){
	cout<<"maximum Hight Mountain is:"<<endl;
	if(m1.height>m2.height){
		m1.dispaly();
	}else{
		m2.dispaly();
	}
}
void Mountain::dispaly(){
	cout<<"Name:"<<name<<endl<<"Height:"<<height<<endl<<"address:"<<address;
}
Mountain::Mountain(){
	cout<<"Enter maountain Name:";
	cin>>name;
	cout<<endl<<"Height:";
	cin>>height;
	cout<<endl<<"address:";
	cin>>address;
}
int main(){
	Mountain m1,m2;
	max(m1,m2);
	return 0;
}


