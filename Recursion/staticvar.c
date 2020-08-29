#include<stdio.h>
int fun(){
            static int x=6;
            x++;
            return x;
}
main(){
       printf("%d\n",fun());
        printf("%d",fun());
        return 0;
}
