#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

 //int power(int m, int n);
float temp_conversion(float celsius, float fahr);

 int main(){
    float celsius, fahr;
    fahr = LOWER;
    while(fahr < UPPER)
    {
        celsius = temp_conversion(celsius, fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }



return 0;
}

float temp_conversion(float celsius, float fahr){
    celsius = 5 * (fahr - 32) / 9;

return celsius;
 }

/*
int power(int base, int n){
    int i, p;
    p = 1;
    for (i = 1; i <= n; ++i)
    {
        p = p * base;
    }    

return p;
} 
*/