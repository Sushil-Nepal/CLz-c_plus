#include<iostream>
using namespace std;
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
};
class GM{
    int g;
    public:
        GM(){g=0;}
        GM(int g){
            this ->g=g;
        }
        GM(KG &k){
            g=1000*k.get_kg();
        }
        void display(){
            cout<<"Gm:"<<g<<endl;
        }
};
int main(){
    GM g;
    KG k(1);
    k.display();
    g=k;
    g.display();
    return 0;
}