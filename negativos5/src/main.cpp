#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int x, cont = 0;

    for (int i = 0; i < SIZE; i++){
        cin >> x;

        if (x < 0){
            cont++;
        }
    }

    cout << cont << std::endl;

    return 0;
}
