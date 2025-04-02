#include <iostream>
using namespace std;

int main()
{

    // ! - негација
    // Овој оператор служи за негација на променливи или некои услови
    bool tocnaPromenliva = true;
    cout<<tocnaPromenliva<<endl;

    // Примена
    cout<< !(tocnaPromenliva) << endl;

    /* && - и || - или
        ПРИМЕР за одобрување на корисник во банка
        Проверуваме дали корисникот има пари на сметка, дали е полнолетен,
        дали има валидна лична карта и дали го погодил својот пин код

        if(daliImaPari && EPolnoleten && daliLicnataKartaEValidna && daliPinotETocen)
        доколку се е океј, клиентот ќе биде одобрен
        спротивно, ќе биде одбиен
    */

    int pariVoBanka = 1000;
    bool daliEPolnoleten = true;
    bool validnaLicnaKarta = true;
    bool tocenPin = true;

    /*  И - сите наведени услови мора да се точни
        ИЛИ - барем еден од наведените услови (помеѓу знакот или) мора да е точен
        Компјутерот ги проверува условите еден по еден
    */

    if( (pariVoBanka > 0) && (daliEPolnoleten == true) && (validnaLicnaKarta == true) && (tocenPin==true) ){
        cout << "Odobreno" << endl;
    }else{
        cout << "Odbien" << endl;
    }

    if( (pariVoBanka > 0) || (daliEPolnoleten == true) || (validnaLicnaKarta == true) || (tocenPin==true) ){
        cout << "Odobreno" << endl;
    }else{
        cout << "Odbien" << endl;
    }


    return 0;
}