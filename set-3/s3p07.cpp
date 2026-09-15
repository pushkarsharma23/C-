#include <iostream>
using namespace std;

class rectangle {

public:
  int width;
  int length;
  void setvalues(int a, int b) {
    length = a;
    width = b;
  }
  int calculatearea() { return length * width; }
  bool checkequal(rectangle &r2) {
    return calculatearea() == r2.calculatearea();
  }
};

rectangle sumoftwo(rectangle r1, rectangle r2) {
  rectangle r3;
  r3.length = r1.length + r2.length;
  r3.width = r1.width + r2.width;
  return r3;
}

int main() {
  rectangle r1, r2;
  r1.setvalues(7, 5);
  r2.setvalues(7, 5);
  cout << r1.checkequal(r2) << endl;
  rectangle r3 = sumoftwo(r1, r2);
  cout << r3.length << " " << r3.width << endl;

  return 0;
}
