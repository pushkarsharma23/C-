#include <iostream>
using namespace std;

class complexnumber {
public:
  int x;
  int y;
  void setvalue(int a, int b) {
    x = a;
    y = b;
  }
  void add(complexnumber c2) {
    cout << "the sum is: " << x + c2.x << " + " << y + c2.y << "i" << endl;
  }

  complexnumber multiply(complexnumber c2) {
    complexnumber c3;
    c3.x = x * c2.x - y * c2.y;
    c3.y = x * c2.y + c2.x * y;
    return c3;
  }
};

void sub(complexnumber c1, complexnumber c2) {
  cout << "the difference is: " << c1.x - c2.x << " + " << c1.y - c2.y << "i"
       << endl;
}

int main() {
  complexnumber c1, c2;
  c1.setvalue(3, 2);
  c2.setvalue(1, 7);
  c1.add(c2);
  complexnumber c3 = c1.multiply(c2);
  cout << c3.x << " + " << c3.y << "i" << endl;
  sub(c1, c2);
  return 0;
}
