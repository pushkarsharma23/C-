#include <iostream>
using namespace std;

class Student {
public:
  int rollNo;
  int marks;

  void setValues() {
    cout << "Enter rollNo.: ";
    cin >> rollNo;
    cout << "Enter the marks: ";
    cin >> marks;
  }
};

Student findTop(const Student &s1, const Student &s2) {
  if (s1.marks > s2.marks) {
    return s1;
  } else {
    return s2;
  }
}

int main() {
  Student s1, s2;
  s1.setValues();
  s2.setValues();
  Student topper = findTop(s1, s2);
  cout << "The highest marks is scored by: " << topper.rollNo
       << " having marks: " << topper.marks << endl;
  return 0;
}
