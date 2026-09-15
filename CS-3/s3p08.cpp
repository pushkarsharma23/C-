#include <iostream>
#include <string>
using namespace std;

class Book {
public:
  int bookId;
  string bookTitle;
  int numberOfCopies;

  Book(int a, string b, int c) {
    bookId = a;
    bookTitle = b;
    numberOfCopies = c;
  }

  void exchange(Book &other) {
    swap(bookId, other.bookId);
    swap(bookTitle, other.bookTitle);
    swap(numberOfCopies, other.numberOfCopies);
  }
};

Book moreCopies(const Book &b1, const Book &b2) {
  if (b1.numberOfCopies > b2.numberOfCopies) {
    return b1;
  } else {
    return b2;
  }
}

int main() {
  Book b1(1001, "Make a Wish", 190), b2(1002, "7 ways to impress a girl", 900);
  b1.exchange(b2);
  cout << b1.bookId << endl;

  cout << moreCopies(b1, b2).bookTitle << endl;

  return 0;
}
