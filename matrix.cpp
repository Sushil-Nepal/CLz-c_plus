#include<iostream>
using namespace std;
class Matrix;
Matrix operator + (Matrix &c1,Matrix &c2);
class Matrix{
    int mat[3][3];
    public:
        Matrix(){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    mat[i][j]=0;
                }
            }
        }
        void input(){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<"a"<<i<<j<<":";
                    cin>>mat[i][j];
                }
            }
        }
        friend Matrix operator +(Matrix &c1,Matrix &c2);
        void display(){
             for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<mat[i][j]<<"\t";
                }
                cout<<endl;
            }
        }
};
Matrix operator +(Matrix &c1,Matrix &c2){
            Matrix ctemp;
                for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    ctemp.mat[i][j]=c1.mat[i][j]+c2.mat[i][j];
                }
            }
            return ctemp;
        }
int main(){
    Matrix c1,c2;
    c1.input();
    c2.input();
    c1.display();
    c2.display();
    Matrix c3;
    c3=c1+c2;
    c3.display();
    return 0;
}