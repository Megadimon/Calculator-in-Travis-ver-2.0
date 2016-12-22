#include <iostream>

#include "calculator.hpp"
using namespace std;

int main()
{
    float a, b;
    cin >> a;
    cin >> b;
    
    cout << sum( a, b ) << endl;
    cout << sub( a, b ) << endl;
    cout << mult( a, b ) << endl;
    cout << div( a, b ) << endl; 
    cout << pow( a ) << endl;
    cout << sq( a ) << endl;
}
