#include <iostream>
using namespace std;

// Кога креираме фунцкии, променливите може да ги прекрстиме или да им зададеме исто име
// ова не претставува грешка, единствено нешто што треба да се запази е типот на променливата
// Дополнително, овие променливи може да ги користиме само во склоп на оваа функција
void myFunction(string ime, string prezime, int promenliva) {
    cout<<ime<<" "<<prezime<<endl;
    cout<<promenliva;
}

int main()
{
    string i = "Marko";
    string p = "Markovski";
    int a = 5;

    myFunction(i, p, a);

    return 0;
}