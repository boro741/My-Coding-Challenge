#include <stdio.h>
int main()
{
    int t,i,j;
    scanf("%d",&t);

    int arr[t];
    for(i=0;i<t;i++){
        scanf("%d",&arr[i]);
    }

    for(j = t-1;j >= 0;j--){
        printf("\nelement %d=%d",j+1,arr[j]);
        //printf("\n%d",j);
    }
	return 0;
}