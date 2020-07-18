#include<stdio.h>
int main(){
            int n,result=0,q,rem;
            printf("Enter the number :");
            scanf("%d",&n);
            q=n;
            while(q!=0){

                rem=q%10;
                result = result*10 +rem;
                q = q/10;
            }
            if(n==result){
                printf("%d is palindrom.",n);
            }
            else{
                printf("%d is not palindrom.",n);
            }

}
