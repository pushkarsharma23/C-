#include <iostream>
using namespace std;

class BankAccount {
  int accountNumber;
  double balance;

public:
  BankAccount(int accountNo) {
    accountNumber = accountNo;
    balance = 5000;
  }
  void transfer(BankAccount &receiver, double amount) {
    if (amount <= 0) {
      cout << "Invalid amount entered";
      return;
    }
    if (amount > balance) {
      cout << "Not sufficient amount.";
      return;
    }
    balance = balance - amount;
    receiver.balance += amount;
    cout << "Process successfull..." << endl;
    cout << "Remaining balance: " << balance << endl;
  }
};

int main() {
  BankAccount b1(10001), b2(10002);
  b1.transfer(b2, 200.78);
  return 0;
}
