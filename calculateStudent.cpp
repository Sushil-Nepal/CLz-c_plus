#include<iostream>
#include <cstdlib> // for system("cls")
using namespace std;
class Student{
    char name[20];
    char program[20];
    int roll;
    static int noOfStudents;
    public:
    void input();
    static void displayNoOfStudent();
};
int Student::noOfStudents = 0;
int main(){
    Student s[50];
    int ch,i=0;
    char a;
    do{
        system("cls"); // Clear the console screen
        Student::displayNoOfStudent();
        cout<<"Enter  a choice:\n1.add Student\n2.display no of students\n";
        cin>>ch;
        switch(ch){
            case 1:
                s[i].input();
                i++;
                break;
            case 2:
                Student::displayNoOfStudent();
                break;
            default:
                cout<<"Invalid choice\n";
        }
        cout<<"Do you want to continue? (y/n): ";
        cin>>a;
    }while(a=='y' || a=='Y');

    return 0;      
}
void Student::input(){
    cout<<"Enter name of student: ";
    cin>>name;
    cout<<"Enter program of student: ";
    cin>>program;
    cout<<"Enter roll number of student: ";
    cin>>roll;
    noOfStudents++;
}
void Student::displayNoOfStudent(){
    cout<<"Total number of students: "<<noOfStudents<<endl;
    if(noOfStudents>=50){
        cout<<"Seat are not available.\n";
    }
    else{
        cout<<"Seat are available.\n";
    }
}      