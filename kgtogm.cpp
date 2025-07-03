#include<iostream>
using namespace std;
class GM{
    int g;
    public:
        GM(){g=0;}
        GM(int g){
            this ->g=g;
        }
        void display(){
            cout<<"Gm:"<<g<<endl;
        }
};
class KG{
    int kg;
    public:
        KG(){kg=0;}
        KG(int k){
            kg=k;
        }
        void display(){
            cout<<"KG:"<<kg<<endl;
        }
        int get_kg(){
            return kg;
        }
        operator GM(){
          //  GM gobj;
         int g=kg*1000;
            return GM(g);
        }
};

int main(){
    GM g;
    KG k(1);
    k.display();
    g=k;//g=k.operatort GM();
    g.display();
    return 0;
}