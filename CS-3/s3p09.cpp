#include <iostream>
#include <string>
using namespace std;

class Product {
public:
  string productName;
  double price;
  int quantity;

  Product combinedInventory(Product p1) {
    Product p3;
    p3.quantity = p1.quantity + quantity;
    return p3;
  }
};

Product higherTotalValue(const Product &p1, const Product &p2) {
  if (p1.price * p1.quantity > p2.price * p2.quantity) {
    return p1;
  } else {
    return p2;
  }
}

int main() {
  Product p1, p2;
  p1.productName = "icecream";
  p1.price = 60;
  p1.quantity = 500;
  p2.productName = "laptops";
  p2.price = 100000;
  p2.quantity = 50;
  cout << p2.combinedInventory(p1).quantity << endl;
  cout << higherTotalValue(p1, p2).productName << endl;
  
  return 0;
}
