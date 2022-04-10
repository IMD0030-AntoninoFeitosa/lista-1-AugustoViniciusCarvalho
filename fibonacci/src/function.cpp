#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    // TODO: adicione o seu código aqui.

    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.

    vector<unsigned int> teste;

    teste.assign(2,1);

    while (teste.back() < n){
        teste.push_back(teste.back() + teste[teste.size()-2]);
    }

    teste.pop_back();

    if (n == 0 || n == 1){
        teste.clear();
    }

    return teste;
}
