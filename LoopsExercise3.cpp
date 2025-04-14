#include <iostream>
using namespace std;


int main()
{
    // Деливост - подетално
    // Корисникот да внесе некој број
    // Ние да провериме дали тој број се дели со 12

    cout<<"Korisnikot da vnese nekoj broj"<<endl;

    int broj;
    cin>>broj;

    if( broj % 12 == 0 ) {
        cout << broj;
    }else{
        cout<<"Ne se deli";
    }


    return 0;
}