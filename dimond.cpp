#include <iostream>
#include <cstring>
using namespace std;

class University {
protected:
    char name[30];      // University name
    int regNo;
    char address[50];
public:
    University() {}
    University(const char n[], const char a[], int r) {
        strcpy(name, n);
        strcpy(address, a);
        regNo = r;
    }
    void display() {
        cout << "University Name: " << name << endl;
        cout << "Registration No: " << regNo << endl;
        cout << "Address: " << address << endl;
    }
};

class Affiliated : virtual public University {
protected:
    char name[30];     // Affiliated college name
    int cCode;
public:
    Affiliated() {}
    Affiliated(const char un[], int r, const char ad[], const char n[], int c)
        : University(un, ad, r) {
        strcpy(name, n);
        cCode = c;
    }
    void display() {
        cout << "Affiliated College Name: " << name << endl;
        cout << "Affiliated College Code: " << cCode << endl;
    }
};

class Constituent : virtual public University {
protected:
    char name[30];     // Constituent college name
    int cCode;
public:
    Constituent() {}
    Constituent(const char un[], int r, const char ad[], const char n[], int c)
        : University(un, ad, r) {
        strcpy(name, n);
        cCode = c;
    }
    void display() {
        cout << "Constituent College Name: " << name << endl;
        cout << "Constituent College Code: " << cCode << endl;
    }
};

class Department : public Affiliated, public Constituent {
protected:
    char name[30];    // Department name
    int nostu;
public:
    Department() {}
    Department(const char n[], int stu, int r,
               const char un[], const char addr[],
               const char affName[], int affCode,
               const char constName[], int constCode)
        : University(un, addr, r),
          Affiliated(un, r, addr, affName, affCode),
          Constituent(un, r, addr, constName, constCode) {
        strcpy(name, n);
        nostu = stu;
    }

    void display() {
        cout << "Department Name: " << name << endl;
        cout << "Number of Students: " << nostu << endl;
    }
};

int main() {
    Department d("Computer Engineering", 80, 12345,
                 "Tribhuvan University", "Kirtipur, Kathmandu",
                 "St. Xavier's", 2001,
                 "Pulchowk Campus", 2002);

    // Call individual display functions using casting or scope to resolve ambiguity
    d.University::display();     // Show university info
    d.Affiliated::display();     // Show affiliated college info
    d.Constituent::display();    // Show constituent college info
    d.display();                 // Show department info only

    return 0;
}
