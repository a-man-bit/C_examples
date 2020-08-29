#include<stdio.h>
long int fact(int n);
main(){
        int n;
        printf("Enter a number:");
        scanf("%d",&n);
        printf("Factorial of %d = %1d",n,fact(n));
        return 0;
}
long int fact(int n){
                            if(n>=1)
                                return n*fact(n-1);
                            else
                                return 1;
                            }
