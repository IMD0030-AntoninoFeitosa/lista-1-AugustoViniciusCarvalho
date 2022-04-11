/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


const int SIZE = 6;

int main(void)
{
    // TODO: Adicione aqui seu código.

    int num[SIZE];

    while (cin >> std::ws >> num[0]){
        
        for (int i = 1; i < SIZE; i++){
            cin >> num[i];
        }

    Ponto IE;
    Ponto SD;
    Ponto P(num[4],num[5]);
    std::pair<int,int> P1;
    std::pair<int,int> P2;
    P1.first = num[0];
    P1.second = num[1];
    P2.first = num[2];
    P2.second = num[3];

    if (P1.first < P2.first){
        IE.x = P1.first;
        SD.x = P2.first;
    } else {
        IE.x = P2.first;
        SD.x = P1.first;
    }

    if (P1.second < P2.second){
        IE.y = P1.second;
        SD.y = P2.second;
    } else {
        IE.y = P2.second;
        SD.y = P1.second;
    }

    if (P1 != P2){
        if (pt_in_rect(IE,SD,P) == INSIDE){
            cout << "inside" << endl;
        } else if (pt_in_rect(IE,SD,P) == BORDER){
            cout << "border" << endl;
        } else if (pt_in_rect(IE,SD,P) == OUTSIDE){
            cout << "outside" << endl;
        }
    } else {
        cout << "invalid" << endl;
    }
    }

    return 0;
}
