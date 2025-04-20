#include <iostream>
using namespace std;

int main() {

  // PRE VS POST INCREMENT/DECREMENT -> ADDS/REMOVES VALUE before/after used in expression
  int i;

  // dodavanje na vrednost pred da izvrsime nesto
  // preincrement -> ++i

  // dodavanje na vrednost posle izvrsuvanjeto na nesto
  // postincrement -> i++

  // odzimanje na vrednost pred da izvrsime nesto
  // predecrement -> --i

  // odzimanje na vrednost posle izvrsuvanjeto na nesto
  // postdecrement -> i--

  int a = 2, b = 3, c;
  // a = 2
  // b = 3
  c = a++ + ++b; // c = (a = 2 *) + (b = 4) -> c=6

  // cout<<a<<b<<c;
  // c = 6, a = 3, b = 4

  // ======================================================================

  int a = 1, b = 2, c = 3, result;
  // a = 1;
  // b = 2;
  // c = 3;

  result = a++ + ++b + c--; //  (a=1 *) + (b=3) + (c=3 *) -> 7

  cout<<result; // 7
  cout<<a<<b<<c; // a=2, b=3, c=2

  // =======================================================================

  int m = 7;          // m = 7
  cout << m++ << " "; // pecati: m = 7 -> promenliva m = 8
  cout << ++m << " "; // pecati: m = 9
  cout << m-- << " "; // pecati: m = 9 -> promenliva m = 8
  cout << --m << endl; // pecati: m = 7

  // =======================================================================

  int a = 3, b = 4, c = 5;
  // a = 3
  // b = 4
  // c = 5
  int result = a++ + ++b + c-- - --a; // (a=3 *) + (b=5) + (c=5 *) - (a=2)
  // result = 11
  // a = 3
  // b = 5
  // c = 4

  return 0;
}