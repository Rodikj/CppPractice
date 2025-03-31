#include <iostream>

using namespace std;

int main()
{
    /* Обработка на операторот за еднаквост на променливи
       синтаксички е знакот ==
       се споредуваат сите типови на променливи
       кога споредуваме стрингови, да се внимава на големи и мали букви
     */
    int broj1 = 10;
    int broj2 = 10;
    
    if(broj1 == broj2) {
        cout << "Dvata broja se ednakvi"<<endl;
    }else{
        cout << "Dvata broja ne se ednakvi"<<endl;
    }

    string ime1 = "Jana";
    string ime2 = "jana";

    if(broj1 == broj2) {
        cout << "Dvete iminja se isti"<<endl;
    }else{
        cout << "Dvata iminja ne se isti"<<endl;
    }

    return 0;
}