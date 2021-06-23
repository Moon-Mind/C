// Print numbers from 1 to 5

#include <stdio.h>
int main()
{
    int start = 0;
    int ende  = 10;
    
    do {
        --ende;

        printf("Countdown stand %d\n", ende);
    }
    while (ende>start);
    return 0;
}