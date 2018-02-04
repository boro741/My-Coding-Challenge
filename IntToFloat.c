#include <stdio.h>
#include<math.h>
int main()
{
    float x[3];
	int i;
	
	for(i=0;i<2;i++){
		scanf("%f",&x[i]);
	}

	for(i=0;i<2;i++){
		printf("\nValue is:%d",(int)round(x[i]));
	}

    return 0;
}