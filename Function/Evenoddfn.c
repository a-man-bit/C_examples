#include<stdio.h>
int evenodd();
int main(){
            int n;
            printf("Enter a number:");
            scanf("%d",&n);
            if(evenodd(n)==1){
                printf("%d is even.",n);
            }
                else
                    printf("%d is odd.",n);

                return 0;
                }
int evenodd(n){
                int flag;
                if(n%2==0){
                    flag = 1;
                }
        return flag;

            }
