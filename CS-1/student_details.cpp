#include<iostream>
#include<string>
using namespace std;

class Student {
    private:
    string name;
    int rollNo;

    public:
    void displayData() {
        cout<<" The Student Details are: "<<endl;
        cout<<" Name: "<<name<<endl;
        cout<<" Roll No: "<<rollNo<<endl;
    }
    public:
    void setData(string n,int r) {
        name = n;
        rollNo = r;
    }
};
int main() {
    Student s1,s2;
    s1.setData("Mohit", 1);
    s1.displayData();
    s2.setData("Rohit", 2);
    s2.displayData();

    return 0;
}
