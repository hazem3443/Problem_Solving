const * int ptr

ptr = 0x1 
*ptr =11

const int * ptr

ptr = 0x1
*ptr = 0x1
    

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define CHECK(x,y,z) printf("%6s = %3d %9s\n",x,z,((y)==z)?"OK":"ERROR");
void tests(void);
/* C code below​​​​​​‌​‌​​​​​​​​‌‌​‌‌‌​‌​‌‌​‌‌ */
static int reverse ( int x )
{
    int len=0;
    int x_copy = x;

    int res =0;

    printf ("Original integerss: %12d\n", x); 

    while(x > 0)
    {
        res += (x%10) ;
        res *= 10;
        x /=10;
    }
    res/=10;
    
    return res;

    return 0;
}
int main()
{
    int x = 123456789;
    printf ("Original integer: %12d", x);
    printf ("\nReversed integer: %12d\n", reverse(x));
    // tests();

    // int y = 123456789;
    // printf ("O: %12d", y);

    return 0;
}



void tests(void){
    CHECK("Reverse 123456",reverse(123456),654321);
    CHECK("Reverse 123",reverse(123),321);
    CHECK("Reverse 101",reverse(101),101);
    CHECK("Reverse 123321",reverse(123321),123321);
    CHECK("Reverse 123456789",reverse(123456789),987654321);
    CHECK("Reverse 1230",reverse(1230),321);
    CHECK("Reverse 1",reverse(1),1);
    CHECK("Reverse 0",reverse(0),0);
}

beside many Autosar questions regarding 