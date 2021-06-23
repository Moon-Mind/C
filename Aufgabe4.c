#include <stdio.h>
#include <math.h>

float quad (float a, float b);

int main() {
    float a; 
    float b;
    float c;
    float d;
    

      for( a = 0.0; a <= 1.00; a = a + 0.01 ){
      a = ceilf(a*100)/100;
      c = asin(a);
      c = ceilf(a*100)/100;
      d = quad(a, b);
      printf("Sinus of %4.2f is %4.2f the quad is %f\n"  , a,c,d);

      }
      /*
      for( b = 0.0; b < 1.01; b = b + 0.01 ){
      printf(" Cosinus of %4.2f", b);
      printf(" : %4.2f ", acos(b));
      float summe = acos(b);
      printf(" Quadat %4.2f\n", summe);
      }
      */
}

float quad (float a, float b){
        float d ;
        d = a * a;
    return (d);
}
