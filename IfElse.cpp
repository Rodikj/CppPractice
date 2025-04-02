#include <iostream>
using namespace std;

int main()
{
    /*
        Како што учевме до сега if-else е израз за проверка или споредба на некоја променлива или некој услов
        Синтакса:
        if( uslov ) {
            napraviAkoTocno
        }else {
            napraviAkoNetocno
        }

        ако... спротивно
        if-else -> мора да има некој услов или споредба
    */

    int nekojBroj = 0;

    if (nekojBroj == 0) {
        cout<<"Brojot e ednakov na 0";
    }else {
        cout<<"Brojot ne e ednakov na 0, razlicen e od 0";
    }

    /*
        Дополнително, може да си додаваме бесконечно дополнителни услови за проверка доколку првиот не е точен
        тоа се прави со else if
        вака само додаваме нови услови за проверка во нашиот код
    */
    
    if( nekojBroj > 0) {
        cout << "Ova e pozitiven broj!";
    }else if( nekojBroj == 0){
        cout << "Neutralen broj ili 0";
    }else {
        cout << "Ova e negativen broj!";
    }

    /*
        Тернарен оператор (? :)
        Тернарниот оператор овозможува краток запис на if - else структурата
        Синтакса
        (услов) ? Доколку условот е точен што да правиме : Доколку условот е неточен што да правиме

        Во случај кога имаме cout или cin, ние на самиот почеток ги пишуваме операторите за влез или излез
    */

    //Ова е првиот if-else во документот со употреба на тернарен оператор
    cout << (nekojBroj > 0 ? "Brojot e ednakov na 0" : "Brojot ne e ednakov na 0, razlicen e od 0") << endl;
    
    return 0;
}