#include<iostream>
using namespace std;

class Rectangle {
    private:
    int length;
    int breadth;

    public:
    void input() {
        cout<<" Enter length: ";
        cin>>length;
        cout<<" Enter breadth: ";
        cin>>breadth;   
    }

    int calculateArea() {
        return length*breadth;
    }

    void displayArea() {
        cout<<" Area of rectangle is "<<length*breadth<<endl;
    }

 };

 int main() {
    Rectangle r1,r2;
    r1.input();
    r1.calculateArea();
    r1.displayArea();
    r2.input();
    r2.calculateArea();
    r2.displayArea();

    return 0;
 }
