#include<iostream>
using namespace std;
class person{
    private:
    char name[20];
    int age;
    public:
        void getData(void);
        void putData(void);
};
void person::getData(void){
    cout<<"Enter a Name";
    cin>>name;
    cout<<"Enter a age:";
    cin>>age;
}
void person::putData(void){
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
}
int main(){
    person p;
    p.getData();
    p.putData();
    return 0;
}