#include<stdio.h>
main(){
        int a,b,c;
        printf("Enter three numbers to check largest number:");
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && a>c){


            printf("%d a is greater than %d and %d.",a,b,c);
        }


            else if(b>c && b>a){
            printf("%d b is greater than %d and %d.",b,a,c);

        }
        else if(c>a && c>b){
            printf("%d c is greater than %d and %d.",c,b,a);
        }
        else if(a==b && a==c){
            printf("%d = %d and %d All equal. ",a,b,c);
        }

}
