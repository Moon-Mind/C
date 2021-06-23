#include <stdio.h>
int main()
{
    int a = 9;
    int i = 0;
    int summe;
    
    while (a > i) {
        summe = a + i;
        printf("Summe von %d und %d : %d\n",a, i , summe);
        ++i;
    }

    return 0;
}