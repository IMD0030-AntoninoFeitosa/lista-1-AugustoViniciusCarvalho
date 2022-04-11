#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    // TODO: Adicione seu código aqui.

    location_t retorno;

    if ((P.x > IE.x && P.y > IE.y) && (P.x < SD.x && P.y < SD.y)){
        retorno = INSIDE;
    } else if ((P.x == IE.x && P.y >= IE.y) && (P.x < SD.x && P.y <= SD.y)){
        retorno = BORDER;
    } else if ((P.x >= IE.x && P.y == IE.y) && (P.x <= SD.x && P.y < SD.y)){
        retorno = BORDER;
    } else if ((P.x > IE.x && P.y >= IE.y) && (P.x == SD.x && P.y <= SD.y)){
        retorno = BORDER;
    } else if ((P.x >= IE.x && P.y > IE.y) && (P.x <= SD.x && P.y == SD.y)){
        retorno = BORDER;
    } else {
        retorno = OUTSIDE;
    }

    return retorno;
}
