#include <iostream>
using namespace std;

int main()
{
    // Збир на првите 500 броеви кои се делливи со 4
    // Sum of the first 500 numbers that are devisable with 4

    //Деливост пресметуваме со модулус оператор (%)
    //Да се потсетиме, модулус враќа остаток при делење
    //За да пресметаме дали некој број е делив со друг број користиме модулус оператор и очекуваме 0 како остаток

    int sum = 0;

    for(int i = 0; i <= 500; i++) {
        if( i % 4 == 0 ) {
            sum += i;
        }
    }

    cout << sum;

    // Модификација: Збир на првите N броеви кои се делливи со 4
    // Modification: Sum of first N numbers that are devisable with 4
    
    int sum1 = 0;

    int n;
    cin >> n;

    for(int i = 0; i <= n; i++) {
        if( i % 4 == 0 ) {
            sum += i;
        }
    }

    cout << sum;

    return 0;
}