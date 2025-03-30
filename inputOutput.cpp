#include <iostream>

using namespace std;

int main() {

    string name;
    string surname;
    int age;
    int cardNumber;
    int amount;
    int credit;

    cout << "Koe e vaseto ime?" << endl;
    cin >> name;

    cout << "Koe e vaseto prezime?"<< endl;
    cin >> surname;

    cout << "Koja e vasata vozrast?" << endl;
    cin >> age;

    cout << "Broj na karticka" << endl;
    cin >> cardNumber;

    cout << "Kolku pari sakate da stavite na vasata karticka" << endl;
    cin >> amount;

    cout << "Koja e vrednosta na kreditot koj sto sakate da go podignete?" << endl;
    cin >> credit;

    return 0;
}