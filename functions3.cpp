#include <iostream>
using namespace std;

//user-defined function
void isLeapYear(int year) {

    bool isLeapYear = false;

    if(year % 4 == 0) {
        isLeapYear = true;
    }


    if(isLeapYear) {
        cout << "Odbranata godina e prestapna";
    }else {
        cout << "Odbranata godina ne e prestapna";
    }
}


int main()
{
    // Да креираме функција која ќе проверува дали зададена година е престапна или не и соодветно да отпечати
    // Престапна година е секоја 4та година
    // 2024, 2028, 2032...

    int year = 2024;
    int year1 = 2025;
    int year2 = 2026;
    int year3 = 2027;
    int year4 = 2028;

    isLeapYear(year);
    isLeapYear(year1);
    isLeapYear(year2);
    isLeapYear(year3);
    isLeapYear(year4);


    return 0;
}