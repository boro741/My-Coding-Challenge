#include<stdio.h>
#include <math.h>


int main(){
    
    int t;
    int i = 0;
    
    scanf("%d",&t);
    long n[t];
    
    for(i=0;i<t;i++)
        scanf("%lu",&n[i]);
    
    // 1.Find the factors.
    long s;
    int j,f,rem = 0;
    long q;
    
    for(i=0;i<t;i++){
        
        f = 0;
        
        s = round(sqrt(n[i]));;
        
        
        
        for (j = 1; j <= s; j++) {
            rem = n[i]%j; // Checking if divisible by i.
            
            // If divisilbe
            if (rem == 0) {
                q = n[i]/j;
                
                if ( j != q){
                    f+=2;
                } else{
                    f++;
                }
            }
        }
        
        
        if(f > 2){
            printf("\nNot a prime");
        }else{
            printf("\nPrime number");
        }
    }
    
    
    
    return 0;
}
