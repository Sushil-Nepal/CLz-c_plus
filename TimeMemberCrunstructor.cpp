//using cronstructor
#include<iostream>
using namespace std;
class Time{
    int hr,min,sec;
    public:
    Time();
    Time(int h,int m,int s);
    void calculate(Time &t1,Time &t2);
    void dispaly();
};
Time::Time(){
    cout<<"Enter a Time"<<endl<<"hr:";
    cin>>hr;
    cout<<"Min:";
    cin>>min;
    cout<<"Sec:";
    cin>>sec;
}
Time::Time(int h,int m,int s){
    hr=h;
    min=m;
    sec=s;
}
void Time::dispaly(){
    cout<<"Time is:"<<hr<<":"<<min<<":"<<sec<<endl;
}
void Time::calculate(Time &t1,Time &t2){
    sec=t1.sec+t2.sec;
    min=t1.min+t2.min+(sec/60);
    sec=sec%60;
    hr=t1.hr+t2.hr+(min/60);
    min=min%60;
}

int main(){
    Time t1,t2,t3(0,0,0);
    t3.calculate(t1,t2);
    t3.dispaly();
    return 0;
}
