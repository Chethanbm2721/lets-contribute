   
#include <stdio.h>  
#include <math.h>  
  
int main()  
{  
    int p, t;  
    float r, ci;  
  
    printf("Enter principal amount\n");  
    scanf("%d", &p);  
  
    printf("Enter rate of interest\n");  
    scanf("%f", &r);  
  
    printf("Enter time period\n");  
    scanf("%d", &t);  
  
  
    ci = p * pow( (1 + r / 100), t );  
  
    printf("Compound Interest is %f\n", ci);  
  
    return 0;  
}