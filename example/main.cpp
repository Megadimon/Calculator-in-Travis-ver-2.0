#include <iostream>

#include "calculator.hpp"
using namespace std;

int main(void)
{
    float a = 0.0;
    float b = 0.0;
    int* c = (int*)malloc(sizeof(int));
    *c = 0;
    cout << "************Welcome to the Calculator vol 2.0************" << endl;
    cout << "a = ";
    cin >> a;
    cout << endl << "b = ";
    cin >> b;
    cout <<"a+b = " << sum(a,b) << endl;
    cout <<"a-b = " << sub(a,b) << endl;
    cout <<"a*b = " << mult(a,b) << endl;
    div(a,b,c);
    if (*c == 0 ) cout <<"a/b = " << div(a,b,c) << endl;
	    else cout << " a/b = Error" << endl;
    pow (a,b,c);
    if (*c == 0) cout <<"a^b = " << pow(a,b,c) << endl;
	    else cout << " a^b = Error" << endl;
    if (*c == 0) cout <<"sqrt a = " << sq(a,c) << endl;
	    else cout << " sqrt a = Error" << endl;
    _getch();
    return 0;
 }
