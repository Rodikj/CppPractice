#include <iostream>
using namespace std;

int main()
{
    /*
        switch - case
        Се користи за променливи од тип int, char, enum
        Со switch() -> кажуваме која променлива ќе ја проверуваме
        Со case -> кажуваме случај, односно бележиме блок на код доколку имаме одредена вредност
        После секој case треба да имаме break; -> ова означува крај на case-от, во спротивно сите case-ови надоле ќе се отпечатат

        Прилично многу се слични на if-if else-else изразите
        На крај од секој switch-case можеме, а и не мораме да дефинираме default case, ова означува што ќе се случи доколку ниеден
        case не е опфатен (слично на else условот кај if-else изразите
    */

    int day = 1;
    switch(day) {
        case 1:
            cout<< "Denot e Ponedelnik";
            break;
        case 2:
            cout<< "Denot e Vtornik";
            break;
        case 3:
            cout<< "Denot e Sreda";
            break;
        case 4:
            cout<< "Denot e Cetvrtok";
            break;
        case 5:
            cout<<"Denot e Petok";
            break;
        case 6:
            cout<<"Denot e sabota";
            break;
        case 7:
            cout<<"Denot e nedela";
            break;
        default:
            cout<<"Nevalid den";
            break;
    }

    return 0;
}