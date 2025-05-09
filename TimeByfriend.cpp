//using cronstructor
#include<iostream>
using namespace std;
class Time;
Time calculate(Time &t1,Time &t2);
class Time{
    int hr,min,sec;
    public:
    Time();
    Time(int h,int m,int s);
    friend Time calculate(Time &t1,Time &t2);
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
Time calculate(Time &t1,Time &t2){
	Time final(0,0,0);
    final.sec=t1.sec+t2.sec;
    final.min=t1.min+t2.min+(final.sec/60);
    final.sec=final.sec%60;
    final.hr=t1.hr+t2.hr+(final.min/60);
    final.min=final.min%60;
    return final;
}

int main(){
    Time t1,t2,t3(0,0,0);
    t3=calculate(t1,t2);
    t3.dispaly();
    return 0;
}
