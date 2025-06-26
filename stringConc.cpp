#include<iostream>
#include<cstring>
using namespace std;
class Str{
    char arr[100];
    public:
        Str(){
            strcpy(arr,"");
        }
        Str(const char a[]){
            strcpy(arr,a);
        }
        Str operator +(Str &s1){
            Str ctemp;
                char t[100];
                strcpy(t,s1.arr);
                strcat(s1.arr,arr);
                strcpy(ctemp.arr,s1.arr);
                strcpy(s1.arr,t);
                return ctemp;
        }
        void display(){
            cout<<"string is:"<<arr<<endl;
        }
};
int main(){
    Str c1("ram"),c2("hari");
    c1.display();
    c2.display();
    Str c3;
    c3=c1+c2;
    c3.display();
    return 0;
}