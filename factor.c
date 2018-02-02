#include<stdio.h>
#include <math.h>


int main(){
    
    int i,q,r,f;
    int n = 1093;
    int s = round(sqrt(n));
    
    // Algorithm:
    // 1. Find the square root of the number s.
    // 2. Run loop till s.
    // 3. Check the divisibility of number from 1 to s.
    // 4. Record i and quotient.
    
    for (i=1; i<= s; i++) {
        r = n % i;
        if (r == 0) {
            q = n/i;
            

            printf("\n%d",i);
            printf(" and %d\n",q);

            if(i != q){
                f+=2;
            } 
            
            if(i == q){
                f++;
            }

        }
    }
    
    printf("%d",f);
    return 0;
}
