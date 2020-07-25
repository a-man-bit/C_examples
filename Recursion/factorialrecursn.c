#include<stdio.h>
long int multiplynumber(int n);
main(){
        int n;
        printf("Enter a number");
        scanf("%d",&n);
        printf("Factorial of %d = %1d",n,multiplynumber(n));
        return 0;
}
long int multiplynumber(int n){
                            if(n>=1)
                                return n*multiplynumber(n-1);
                            else
                                return 1;
                            }
