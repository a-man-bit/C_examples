#include<stdio.h>
int primecheck();
int main(){
            int n;
            printf("Enter an integer to check whether it is prime or not.\n");
            scanf("%d",&n);

             if(primecheck()==1){
                printf("%d is prime.",n);

                }
                    else
                        printf("%d is not prime.",n);
            return 0;
}
int primecheck(n){
                    int c,flag;
                    for(c=2;c<=n/2;c++){
                        if(n%c==0){
                            flag = 1;
                        }
                        else{
                        flag = 0 ;}
                    }

            return flag ;
}
