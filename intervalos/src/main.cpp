/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

const int SIZE = 5;

int main(void)
{
    int x, inter[5] = {0}, total = 0;

    while (cin >> std::ws >> x){
        if (x >=0 && x < 25){
            inter[0]++;
        } else if (x >= 25 && x < 50){
            inter[1]++;
        } else if (x >= 50 && x < 75){
            inter[2]++;
        } else if (x >= 75 && x < 100){
            inter[3]++;
        } else {
            inter[4]++;
        }
        total++;
    }

    for (int i = 0; i < SIZE; i++){
        cout << std::setprecision(4) << static_cast<float>(inter[i])/total * 100 << endl;
    }

    return 0;
}
