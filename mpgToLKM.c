#include <stdio.h>
int main()
{
    float mpg;
    scanf("%f",&mpg);

    float lkm = 282.48/mpg;

    printf("%.2f",lkm);
	return 0;
}