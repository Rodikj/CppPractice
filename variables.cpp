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

    //Зошто променливите се викаат променливи? Бидејќи нивната вредност може да се менува
    int godini = 19;
    godini = 20;
    string imeKlient = "Jana";


    cout<<imeKlient<<" ima sega: "<<godini<<" godini \n";

    godini = 21;

    //int vs long
    //Двете се integers, единствената разлика е што променливата long може да биде иницијализирана со поголема вредност (односно од -2 милијарди до +2 милијарди)


    cout<<godini;



    return 0;
}
