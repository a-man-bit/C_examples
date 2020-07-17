#include<stdio.h>
main(){
        char ch;
        printf("Enter any character:");
        scanf("%c",&ch);
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            printf("%c is a alphabet",ch);
        }
        else{
            printf("%c is not an alphabet.");
        }


}
