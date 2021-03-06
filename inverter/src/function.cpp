#include <iostream>
#include <array>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    std::array<std::string, SIZE> aux;
    int cont = 0;

    for (int i = arr.size()-1; i > -1; i--){
        aux[cont] = arr[i];
        cont++;
    }

    arr = aux;
}
