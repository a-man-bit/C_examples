#include<stdio.h>
main(){
        int n,tbl,m=1;
        printf("Enter a number for table:");
        scanf("%d",&n);
        do{
            tbl =n*m;

            printf(" %d *  %d= %d  \n",n,m,tbl);
            m++;
        }while(m<=10);



}
