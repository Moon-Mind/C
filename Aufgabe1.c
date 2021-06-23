#include<stdio.h>

int main() {
    int a = 0;
    int b = 0;

    a = 0x16; //1*16+1*6
    b = 0x08;  //0*16+1*8

    printf("%d  \n",a);
    printf("%d  \n",b);
    
    int c = a+b;

    printf("%d  \n",c);
    printf("0%x  \n",c);



    return(0);
}