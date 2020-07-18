#include<stdio.h>
main(){
        int a,b,result,n,i;
        printf("Enter number of terms:");
        scanf("%d",&n);
        a=0;
        b=1;
        for(i=1;i<=n;i++){
            printf("%d ",a);
            result=a+b;
            a=b;
            b=result;
        }
}
