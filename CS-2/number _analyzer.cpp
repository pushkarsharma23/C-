#include<iostream>
using namespace std;

class Number {
    private:
    int num;

    public:
    void input() {
        cout<<" Enter a number: ";
        cin>>num;
    }

    int isEven() {
        return num%2 == 0;
    }

    void displayResult() {
        if(isEven()) {
            cout<<num<<" is an even number. ";
        }
        else{
            cout<<num<<" is an odd number. ";
        }
    }   

};

int main() {
    Number n1;
    n1.input();
    n1.isEven();
    n1.displayResult();

    return 0;
}
