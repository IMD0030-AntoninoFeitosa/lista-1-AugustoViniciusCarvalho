/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int m, n, res;

    while (cin >> std::ws >> m && cin >> std::ws >> n){

    res = 0;

    int nums[abs(n)];

    if (n == 0){
        res = m;
    } else if (m < n){
        for (int i = 0; i < abs(n); i++){
            nums[i] = m;
            if (n > 0){
                m++;
            } else {
                m--;
            }
        }
    } else if (m > n){
        for (int i = 0; i < abs(n); i++){
            nums[i] = m;
            if (n < 0){
                m--;
            } else {
                m++;
            }
        }
    }

    for (int i = 0; i < abs(n); i++){
        res = res + nums[i];
    }

    cout << res << endl;

    }

    return 0;
}
