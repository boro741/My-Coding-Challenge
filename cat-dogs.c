#include <stdio.h>
int main()
{
    int C[10],D[10],L[10];
    int t,i;
    int pets;
    scanf("%d",&t);

    for(i=0;i<t;i++){
        scanf("%d %d %d",&C[i],&D[i],&L[i]);
    }

    for(i=0;i<t;i++){
        pets = 4 * (C[i] + D[i]);
        if( L[i] <= pets){
            printf("\nyes");
        }else{
            printf("\nno");
        }
    }
	return 0;
}