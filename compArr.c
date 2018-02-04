#include <stdio.h>
int main()
{
    int n1,n2,i,j,flag = 0;
    scanf("%d",&n1);

    float a1[n1];
    for(i=0;i<n1;i++){
        scanf("%2f",&a1[i]);
    }

    scanf("%d",&n2);
    float a2[n2];
    for(i=0;i<n2;i++){
        scanf("%2f",&a2[i]);
    }

    float *arr1 = a1,
        *arr2 = a2;


    if(n1 == n2){
        for(i=0;i<n1 || i<n2;i++){
            if(*arr1 != *arr2){
                flag = 1;
                break;
            }

            arr1++;
            arr2++;
        }
    } else{
        flag = 1;
    }

    if(flag == 1){
        printf("\nArrays are not equal");
    }else{
        printf("\nArrays are equal");
    }

	return 0;
}