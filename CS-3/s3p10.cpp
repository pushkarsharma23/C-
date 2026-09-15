#include <iostream>
using namespace std;

class Result {

public:
  int rollNo;
  int marks[5];
  int totalMarks;
  Result(int r) {
    rollNo = r;
    for (int i = 0; i < 5; i++) {
      cout << "Enter marks: ";
      cin >> marks[i];
    }
    cout << "-----------------------------------" << endl;
  }
  int calculateTotal() {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
      sum += marks[i];
    }
    return sum;
  }
  void compareTwo(Result s2) {
    if (calculateTotal() > s2.calculateTotal()) {
      cout << "The highest score is scored by RollNo.: " << rollNo << endl;
    } else {
      cout << "The highest score is scored by RollNo.: " << s2.rollNo << endl;
    }
  }
};

Result compareThree(Result s1, Result s2, Result s3) {
  Result highest = s1;

  if (s2.calculateTotal() > highest.calculateTotal()) {
    highest = s2;
  }
  if (s3.calculateTotal() > highest.calculateTotal()) {
    highest = s3;
  }
  return highest;
}

Result graceMarks(Result s1) {
  int totalGrace = 0;
  for (int i = 0; i < 5; i++) {
    int grace = 33 - s1.marks[i];
    if (grace < 6 && grace > 0) {
      if (totalGrace + grace > 20) {
        break;
      }
      s1.marks[i] += grace;
      totalGrace += grace;
    }
  }
  return s1;
}

int main() {
  Result s1(1), s2(2), s3(3);
  s1.compareTwo(s2);
  cout << compareThree(s1, s2, s3).rollNo << endl;

  Result revised = graceMarks(s1);
  cout << "After applying grace marks: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << revised.marks[i] << endl;
  }

  return 0;
}
