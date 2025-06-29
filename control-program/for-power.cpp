#include <iostream>     /* File: for-power.cpp */
using namespace std;	

/* To compute $x^n$, where x and n are integers, and n >= 0 */
int main() 
{
    int number;
    int exponent;
    int result;
    cout << "Enter the number" <<endl;
    cin >> number;
    cout << "Enter the exponent" <<endl;
    cin >> exponent;
    result = 1;
    for (int i=1; i<=exponent; ++i){
        result = result * number;
    };
    cout << "The answer is "<< result << endl;
    
    return 0;
}
