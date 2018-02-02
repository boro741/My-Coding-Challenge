#include<stdio.h>

int main(){
    
    int digits = 0;
    int n_zero = 0, n_one = 0;
    int t = 100;
    
// Finding the no of 1's and 0's
    while (t >0) {
        
        // t%10 > 0 ---> 
        // When the remainder is 0 then the value is 1.
        n_zero = n_zero + (t%10 > 0  ? 0 : 1);
        
        // used to traverse all through the digit.
        t = t/10;
        digits++;
    }
    

    n_one = digits - n_zero;
    printf("\n n_zero: %d",n_zero);
    printf("\n n_one: %d\n",n_one);

   
// Problem: Digits equal or not by flipping 1 digit
    if (n_zero > n_one) {
        if (n_one == 1) {
            printf("yes");
        } else {
            printf("no");
        }
    } else {
        if (n_zero == 1) {
            printf("yes");
        } else {
            printf("no");
        }
    }
    
    return 0;
}
