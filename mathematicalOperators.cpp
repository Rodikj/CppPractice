#include <iostream>

using namespace std;

int main() {

    /* Математичките оператори во C++ се многу едноставни,
       само се запазуваат правилата за печатење и едноставно
       операциите се извршуваат со соодветниот математички
       симбол / знак
     */

    int broj1;
    int broj2;

    cout << "Vnesete dva broja po vas izbor!" <<endl;
    cin >> broj1 >> broj2;

    //sobiranje
    cout << "Zbirot na vasite broevi e: ";
    cout << broj1 + broj2<<endl;

    //odzemanje
    cout << "Razlikata na vasite broevi e: ";
    cout << broj1 - broj2<<endl;

    //mnozenje
    cout << "Proizvodot na vasite broevi e: ";
    cout << broj1 * broj2<<endl;

    //delenje
    cout << "Kolicnikot na vasite broevi e: ";
    cout << broj1 / broj2<<endl;

    //modulus % - ostatok pri delenje
    cout << "Ostatokot pri delenjeto na vasite broevi e: ";
    cout << broj1 % broj2 << endl;


    /* Наредниот пример е обработка на операциите инкремент
       и декремент, односно зголемување на вредноста на
       променливата за 1 и намалување на вредноста на
       променливата за 1 -> преку реален пример кога Јана
       би имала роденден
     */

    int godini = 19;
    cout << "Jana vo momentot ima "<< godini << " godini, i za kratko ima rodenden"<< endl;

    //inkrement
    godini++; //godini = godini + 1;

    cout << "Jana slavese rodenden, i sega ima "<< godini << " godini"<<endl;

    //dekrement
    godini--; //godini = godini - 1;
    cout << "Zgresivme Jana nemase rodenden, za zal nejzinite godini se isti kako prethodno, odnosno " << godini << " godini" <<endl;

    return 0;
}