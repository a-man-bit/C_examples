#include<stdio.h>
main(){
        int s,e,sum=0;
        printf("Enter a natural number interval to sum:");
         scanf("%d %d",&s,&e);
        do{


            printf("%d \n",s);

            sum +=s;
            s++;
        }while(s<=e);
        printf("%d is the sum of given interval. ",sum);


}
