#include <iostream>
#include "include/Solution.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Solution s;
    //test Romanintegers

    cout << "roman(I) = " << s.romanToInt("I") <<endl;
    cout << "roman(V) = " << s.romanToInt("V") <<endl;
    cout << "roman(X) = " << s.romanToInt("X") <<endl;
    cout << "roman(L) = " << s.romanToInt("L") <<endl;
    cout << "roman(C) = " << s.romanToInt("C") <<endl;
    cout << "roman(D) = " << s.romanToInt("D") <<endl;
    cout << "roman(M) = " << s.romanToInt("M") <<endl;

    return 0;
}
