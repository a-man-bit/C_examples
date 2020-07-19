#include<stdio.h>
#include<math.h>
main(){
        int x;
        int vol1,vol2,count=0,i;
        printf("Enter a positive integer:");
        scanf("%d",&x);
        vol1=ceil(sqrt(x));
        vol2=x;
        for(i=2;i<=vol1;i++){
            if(vol2%i==0)
                count=1;
        }
        if((count ==0 && vol2 != 1) || vol2 == 2 || vol2 == 3)
            printf("%d is a prime number.",vol2);
        else
            printf("%d is not prime number.",vol2);
 return 0;
}
