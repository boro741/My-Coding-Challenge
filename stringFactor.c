#include<stdio.h>
#include <math.h>


int main(){
    
    // 1.Convert Binary input to Decimal
    long n = 10001000101; // 6
    int i = 0;
    long dec = 0;
    
    long t = n;
    while (n > 0) {
        t = t % 10; // extracts the last digit in each iteration.
        
        dec = dec + (t*pow(2, i));
      
        n = n/10;
        t = n;
        i++;
    }
    
    printf("\ndec: %lu\n",dec);
    
    
    // 2.Find the factors.
    
    long s = round(sqrt(dec));;
    int j,f,rem = 0;
    long q;
    
    for (j = 1; j <= s; j++) {
        rem = dec%j; // Checking if divisible by i.
        
        // If divisilbe
        if (rem == 0) {
            q = dec/j;
            
            if ( j != q){
                     f+=2;
            } else{
                f++;
            }
            
        }
    }
    
    printf("\nFactors: %d",f);
    
    return 0;
}
