#include<iostream>
using namespace std;
class Distance{
    int inch,feet;
    public:
    void input();
    void calculate(Distance d1,Distance d2);
    void dispaly();
};
void Distance::input(){
    cout<<"Enter a Distance"<<endl<<"Feet:";
    cin>>feet;
    cout<<"Inch:";
    cin>>inch;
}
void Distance::dispaly(){
    cout<<"Distance is:"<<feet<<"feet"<<inch<<"inch"<<endl;
}
void Distance::calculate(Distance d1,Distance d2){
    inch=d1.inch+d2.inch;
    feet=d1.feet+d2.feet+(inch/12);
    inch=inch%12;
}

int main(){
    Distance d1,d2,d3;
    d1.input();
    d2.input();
    d3.calculate(d1,d2);
    d3.dispaly();
    return 0;
}
