#include<iostream>
using namespace std;
class Time{
    int hr,min,sec;
    public:
    void input();
    void calculate(Time t1,Time t2);
    void dispaly();
};
void Time::input(){
    cout<<"Enter a Time"<<endl<<"hr:";
    cin>>hr;
    cout<<"Min:";
    cin>>min;
    cout<<"Sec:";
    cin>>sec;
}
void Time::dispaly(){
    cout<<"Time is:"<<hr<<":"<<min<<":"<<sec<<endl;
}
void Time::calculate(Time t1,Time t2){
    sec=t1.sec+t2.sec;
    min=t1.min+t2.min+(sec/60);
    sec=sec%60;
    hr=t1.hr+t2.hr+(min/60);
    min=min%60;
}

int main(){
    Time t1,t2,t3;
    t1.input();
    t2.input();
    t3.calculate(t1,t2);
    t3.dispaly();
    return 0;
}
