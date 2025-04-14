#include <iostream>
using namespace std;

int main()
{
    // Да се пресмета збирот на првите N броеви
    // Sum of first N numbers (N is imput from user)

    // ПОСТАПКА
    // Внесуваме N: 5
    // Програмата пресметува 1 + 2 + 3 + 4 + 5 во некоја променлива (sum во нашиот случај)
    // Програмата враќа 15 (збирот)

    //БИТНО: Избегнувај иницијализација на променливи во loop!

    int n;
    cout << "Vneseto go brojot N" << endl;
    cin >> n;

    int sum = 0;

    for(int i=1;i<=n;i++) {
        sum = sum + i;
    }

    cout << "Zbirot na prvite N broevi e: " << sum;


    return 0;
}

