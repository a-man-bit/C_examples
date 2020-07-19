#include<stdio.h>
int hcf(int ,int);
main(){
    int a,b,result;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    result=hcf(a ,b);
    printf("Hcf of %d and %d is %d.",a,b,result);
}
int hcf( int a ,int b){
while(a!=b){
        if(a>b){
        return hcf(a-b ,b);
        }else{
        return hcf(a, b-a);
        }
            return a;

        }
}
