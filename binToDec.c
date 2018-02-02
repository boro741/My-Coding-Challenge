#include<stdio.h>
#include <math.h>

/* Function to calculate x raised to the power y */
int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    else if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    else
        return x*power(x, y/2)*power(x, y/2);
}

int main(){
    
    // 1.Convert Binary input to Decimal
    long n = 10001000101; // 6
    int i = 0;
    long dec = 0;
    
    long t = n;
    while (n > 0) {
        t = t % 10; // extracts the last digit in each iteration.
        
        dec = dec + (t*power(2, i));
      
        n = n/10;
        t = n;
        i++;
    }
    
    printf("\ndec: %lu\n",dec);
    
    
    return 0;
}
