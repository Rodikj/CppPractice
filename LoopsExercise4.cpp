#include <iostream>
using namespace std;

int main()
{
    // GUESSING GAME
    // Се игра со 2 играчи, Првиот играч замислува тајно бројче
    // Вториот играч пробува да го погоди тајното бројче на играч 1 од најмногу 3 погодоци
    // односно смее да погоди 3 пати

    // Во некоја променлива чуваме бројче (Бројот кој што ќе го погодуваме)
    // Корисникот треба да го погоди тој број со најмногу 3 погодувања
    // Во опсег од 1 до 10

    int tajnoBrojce;
    int pogodi;
    int brojNaPogodi = 1;

    cout<<"Prviot igrac da si smisli tajno brojce"<<endl;
    cin >> tajnoBrojce;

    cout << "Vtoriot igrac da go pogodi brojot (od 1 do 10)"<<endl;
    cin >> pogodi;

    while(pogodi != tajnoBrojce && brojNaPogodi < 3) {
        cout << " Gresen broj, obidi se povtorno "<<endl;
        cin >> pogodi;
        brojNaPogodi++;
    }

    if( pogodi == tajnoBrojce) {
        cout << "Bravo go pogodi brojot" << endl;
    }else{
        cout << "Izgubi vo igrata" << endl;
    }


    return 0;
}