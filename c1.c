#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, x, y, z, s;
    a=10;
    b=5;
    x=pow(a, 2)+pow(b, 2);
    y=pow(a, 2)+(2*a*b)+pow(b, 2);
    z=pow(a, 3)+(3*pow(a, 2)*b)+(3*a*pow(b, 2))+pow(b, 3);
    s=(a+b)/2;
    printf("\nThe x is %d", x);
    printf("\nThe y is %d", y);
    printf("\nThe z is %d", z);
    printf("\nThe s is %d", s);
    return 0;
}
