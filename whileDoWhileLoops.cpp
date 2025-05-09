#include <iostream>
using namespace std;

int main() {

    /*
    While loops се слични на for loops
    Разликата е само начинот на итерација или СИНТАКСА

    Синтакса:
    while(услов) {
        изврши нешто
        некоја промена на условот за да не се заглавиме во endless loop - бесконечен лооп
    }

    Тука да запазиме дека не смееме да иницијализираме променливи во while( )
    */

    // Во овој file ќе добиеш грешка ако го извршиш цел, поради int i, после секој пример (освен првиот)
    // тргни го int кај делот int i = 10... ставив int i секаде за полесна визуелизација

    // Пример за првите 10 броеви
    int i = 1;
    while(i <= 10) {
        cout << i << endl;
        i++;
    }

    // Пример за истиот loop, но во обратен редослед, односно од 10 до 0
    int i = 10;
    while(i >= 1) {
        cout << i << endl;
        i--;
    }

    // Пример за првите 10 парни броеви
    int i = 0;
    while(i < 10) {
        cout << i << endl;
        i += 2;
    }

    // Пример за првите 10 непарни броеви
    int i = 1;
    while(i < 10) {
        cout << i << endl;
        i += 2;
    }

    // Пример за парните броеви од 10 до 30
    int i = 10;
    while(i <= 30) {
        cout << i << endl;
        i += 2;
    }

    // Исто и кај while loops, доколку условот не е точен, нема да има error, него едноставно нема да се изврши кодот во заградите { }
    int i = 0;
    while(i < 0) {
        cout << i << endl;
        i++;
    }

    /*
        Тука доаѓаат и do-while loops кои го нудат следното
        do { } се извршува секогаш, безразлика дали условот е точен или не
        Под do делот доаѓа while дел, кој го формира самото повторување

        do секогаш ќе се изврши!
    */

    //Пример за обичен while loop кој ги печати броевите од 10 до 1 -> истото е како обичен while loop
    int i = 10;
    do {
        cout << i << " " << endl;
        i--;
    }while(i>0);

    //Пример за кога условот не е точен, односно РАЗЛИКА помеѓу while и do-while loops
    int i = 10;
    do {
        cout << i << " " << endl;
        i--;
    }while(i>10);

    /*
    Во горенаведениот пример, програмата ќе го изврши do делот, односно ќе отпечати 10 и променливата i ќе ја намали за 1
    Значи печати 10 и i = 9
    Доаѓа до условот и бидејќи не е точен едноставно ја завршува програмата и формира никаков лооп
    */

    return 0;
}
