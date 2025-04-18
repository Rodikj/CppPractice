#include <iostream>
using namespace std;

int main()
{
    //operator
    char oper;
    float broj1, broj2;

    cout<<"Koja operacija sakate da ja izvrsite";
    cin>>oper; // +, -, *, /

    cout<<"Vnesete dva broj";
    cin>>broj1>>broj2;

    switch(oper) {
        case '+':
            cout<<broj1<< " + "<<broj2<<" = "<<broj1+broj2;
        break;
        case '-':
            cout<<broj1<< " - "<<broj2<<" = "<<broj1-broj2;
        break;
        case '*':
            cout<<broj1<< " * "<<broj2<<" = "<<broj1 * broj2;
        break;
        case '/':
            cout<<broj1<< " / "<<broj2<<" = "<<broj1 / broj2;
        break;
        default:
            cout<<"Kalkulatorot momentalno samo gi izvrsuva slednite operacii: + - * /";
        break;
    }

    return 0;
}