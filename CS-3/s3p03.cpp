#include <iostream>
using namespace std;

class Distance {
  int feet;
  int inches;

public:
  void setDetails(int a, int b) {
    feet = a;
    inches = b;
  }
  void showDetails() {
    cout << "The total distance is: " << feet << "ft " << inches << "in"
         << endl;
  }
  Distance addDistance(Distance &d2) {
    Distance d3;
    int totalFeet = feet + d2.feet;
    int totalInches = inches + d2.inches;
    if (totalInches >= 12) {
      totalInches = totalInches % 12;
      totalFeet = totalFeet / 12;
    }
    d3.feet = totalFeet;
    d3.inches = totalInches;
    return d3;
  }
};

int main() {
  Distance d1, d2;
  d1.setDetails(5, 10);
  d2.setDetails(3, 8);

  Distance d3 = d1.addDistance(d2);
  d3.showDetails();

  return 0;
}
