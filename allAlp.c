#include <stdio.h>
int main()
{
	char start,end;
  
  	scanf("%c %c",&start,&end);
  
  	
	
    int temp = (int)start - 1;

    //printf("%d",temp);
    while(temp != end){
        temp++;
        printf("%c ",temp);
        
    }

    return 0;
}