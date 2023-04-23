#include <iostream>
#include <romanToInt.h>

using namespace std;

int main(int argc, char const *argv[])
{
    Roman R;
    //test Romanintegers

    cout << "roman(I) = " << R.ToInt("I") <<endl;
    cout << "roman(V) = " << R.ToInt("V") <<endl;
    cout << "roman(X) = " << R.ToInt("X") <<endl;
    cout << "roman(L) = " << R.ToInt("L") <<endl;
    cout << "roman(C) = " << R.ToInt("C") <<endl;
    cout << "roman(D) = " << R.ToInt("D") <<endl;
    cout << "roman(M) = " << R.ToInt("M") <<endl;

    return 0;
}
