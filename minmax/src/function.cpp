#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], std::size_t n )
{
    // TODO: Adicione aqui sua solução.

    // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.

    int menor = 0, maior = 0;
    std::pair<int, int> retorno;

    if (n == 0){
        return {-1, -1};
    } else {
            for (int i = 0; i < n; i++){
            if (menor == 0){
                menor = V[i];
            } else if (menor > V[i]){
                menor = V[i];
            }

            if (maior == 0){
                maior = V[i];
            } else if (maior < V[i]){
                maior = V[i];
            }
        }

        retorno.first = 0;

        if (menor == maior && n > 1){
            return {0, n-1};
        } else {
            for (int i = 0; i < n; i++){
                if (V[i] == menor && retorno.first == 0){
                retorno.first = i;
            } else if (V[i] == maior){
                retorno.second = i;
            }
        }

            return { retorno.first, retorno.second };
        }
    }
}
