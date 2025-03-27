#include <iostream>
using namespace std;

int main() {
    /*
    Иницијализираме променливи (variables) на следниот начин
    ТИП ИМЕ = некоја вредност;
    ТИП -> int, float, char, string, bool
    ИМЕ -> наше име за променливата, доколку сакаме името да е од два или повеќе зборови, на наредниот збор првата буква ја правиме голема
    Примери: complexVariable, brojNaKukja, adresaNaZiveenje, myStory
    некоја вредност -> зависи од типот на променливата, доколку е број, boolean или децимален број - само го пишуваме, доколку е карактер го
    наведуваме во единечни наводници, доколку е стринг го пишуваме во двојни наводници
    */

    // пример за коментар во една линија
    /* пример за коментар во повеќе линии */


    int broj = 5;
    cout << broj << endl;

    float decimalenBroj = 2.35;
    cout << decimalenBroj << endl;

    bool vrednost = true;
    cout << vrednost << endl;

    char bukva = 'a';
    cout << bukva << endl;

    string ime = "ana";
    cout << ime << endl;





    return 0;
}