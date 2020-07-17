#include<stdio.h>
main(){
        float a;
        printf("Enter a number to check +ve , -ve or Zero :");
        scanf("%f",&a);
        if(a>0){
            printf("% 2f is positive.",a);
        }
         if(a<0)
            {
                printf("% 2f is negative.",a);

        }
        else if(a==0){
            printf("%2f is Zero.",a);
}
}
