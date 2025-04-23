#include <iostream>

using namespace std;

int main() {

  int a = 1;
  int result = 0;
  // a = 5
  // result = 11
  while (a <= 5) {
    if (a % 2 == 0 || a > 3) {
      result += a;
    }
    a++;
  }

  // За динамична проверка на големина на array
  // Два различни начини за проверка на големина -> еднаш делиме со 4 поради големината на int (4 бајти е еден int)
  // a вториот начин е истото, само делиме со големина на еден елемнт, првиот елемент има големина 4 бајти, па исто доаѓа
  int Array[] = { 1, 2, 3, 4, 5 };
  int size = sizeof(Array) / 4;
  int size2 = sizeof(Array) / sizeof(Array[0]);

  return 0;
}