#include <iostream>

using namespace std;

int main() {

    /* Input во C++
    cin >> imeNaPromenliva
    cin - character in

    Output vo C++
    cout << imeNaPromenliva
    cout - character out

    Во двата наведени настани мора претходно да е иницијализирана променливата (imeNaPromenliva),
    за да можеме да и зададеме вредност (cin) или за да ја испечатиме нејзината вредност (cout)
    */

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
