#include <iostream>

using namespace std;

int main()
{
    /* Обработка на операторот поголемо, помало, поголемо или еднакво, помало или еднакво
       синтаксички, знаците се:  >          <             >=                  <=
       се споредуваат сите типови на променливи
       Кога користиме поголемо или помало, внимаваме да не споредуваме исти броеви,
       за тоа служи операторот поголемо или еднакво и операторот помало или еднакво
     */

    int broj1 = 10;
    int broj2 = 10;
    
    if(broj1 > broj2){
        cout<<"Prviot broj e pogolem"<<endl;
    }else{
        cout<<"Prviot broj ne e pogolem"<<endl;
    }
    
    if(broj1 >= broj2){
        cout<<"Prviot broj e pogolem ili ednakov"<<endl;
    }else{
        cout<<"Prviot broj ne e pogolem ili ednakov"<<endl;
    }

    string ime1 = "jana";
    string ime2 = "ana";

    if(ime1 > ime2){
      cout<<"Ime 1 e pogolemo od ime 2"<<endl;
    }else {
      cout<<"Ime 1 ne e pogolemo od Ime 2"<<endl;
    }

    return 0;
}