#include<stdio.h>

void swapTheNumbers(int *x, int *y)
{
    //*x store the value of n
    // *y store the value of m
    int temp; // temporary variable to store value
    temp = *x; // here temp store the value of first number that is *x
    *x = *y; // here *x store the value of *y that is second number
    *y = temp; // here second number that is *y store the value of temp
}
int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    swapTheNumbers(&n, &m); // passing address to function
    // printing numbers
    printf("%d %d", n, m);
    return 0;
}
