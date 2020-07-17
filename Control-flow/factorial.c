#include<stdio.h>
main(){
        int num,fact=1,x;
        printf("Enter a number to get factorial:");
        scanf("%d",&num);
        x=num;
        do{
            fact =x*fact ;
          printf("\n%d = %d * %d \n",fact,x,fact);
            x--;
            printf("%d\n",x);

        }while(x>1);
 //printf("%d is the Factorial of the %d.",fact,num);
}
