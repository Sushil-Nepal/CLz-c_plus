#include<iostream>
#include<cmath>
using namespace std;
int numDigit(int num){
    int rem,i=0;
    do{
        rem=num%10;
        num/=10;
        i++;   
    }while(num!=0);
    cout<<"Number of digits in "<<num<<" is "<<i<<endl;
    return i;
}
int narisstic(int num,int digit){
    int sum=0,rem;
    while(num!=0){
        rem=num%10;
        sum+=pow(rem,digit);   
        num/=10;
        cout<<rem<<endl<<sum<<endl;
    }
    return sum;
}
int main(){
    int num,result;
    cout<<"Enter a number: ";
    cin>>num;
    int digit=numDigit(num);
    cout<<"Number of digits in "<<num<<" is "<<digit<<endl;
    result=narisstic(num,digit);
    cout<<"Sum of digits raised to the power of "<<digit<<" is "<<result<<endl;
    if(result==num){
        cout<<num<<" is a narissistic number.\n";
    }
    else{
        cout<<num<<" is not a narissistic number.\n";
    }
    return 0;
}