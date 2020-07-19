#include<stdio.h>
main(){
        int n1,n2,i,j;
        printf("Enter an interval to print prime numbers:");
        scanf("%d %d",&n1,&n2);
        for(i=n1;i<=n2;i++){
            for(j=2;j<=i;j++){
                if(i%j==0)
                    break;
            }
            if(i==j)
                printf("%d.\n",j);
        }
}
