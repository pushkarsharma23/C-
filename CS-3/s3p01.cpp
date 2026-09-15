#include <iostream>
using namespace std;

class Number {
public:
  int num;
  void getvalue() {
    cout << "Enter the value of the number: ";
    cin >> num;
  }
};

Number add(const Number &n1, const Number &n2) {
  Number n3;
  n3.num = n1.num + n2.num;
  return n3;
}

int main() {
  Number n1, n2;
  n1.getvalue();
  n2.getvalue();
  cout<<add(n1,n2).num<<endl;
  return 0;
}
