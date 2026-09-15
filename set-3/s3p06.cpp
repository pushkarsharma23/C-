#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
  string name;
  double salary;
  Employee(string nameOfEmployee, double s) {
    name = nameOfEmployee;
    salary = s;
  }
};

Employee highestSalary(Employee members[], int numberOfEmployee) {
  double highest = members[0].salary;
  int j = 0;
  for (int i = 1; i < numberOfEmployee; i++) {
    if (members[i].salary > highest) {
      highest = members[i].salary;
      j = i;
    }
  }
  return members[j];
}

Employee revisedSalary(Employee e1) {
  e1.salary += 0.1 * e1.salary;
  return e1;
}

int main() {
  Employee e1("aman", 2000), e2("samay", 1000), e3("togepi", 300000), e4("ash", 5690.98), e5("misty",89999.980);

  Employee members[5] = {e1, e2, e3, e4, e5};
  cout << highestSalary(members, 5).salary << endl;

  cout << revisedSalary(e5).salary << endl;
  return 0;
}
