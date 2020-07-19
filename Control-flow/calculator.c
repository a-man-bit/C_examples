#include<stdio.h>
main(){
        char operator;
        float a,b;
        printf("Select an operator +,-,*,/:" );
        scanf("%c",&operator);
        switch(operator){
    case'+':
        printf("Enter two operands:");
        scanf("%f %f",&a,&b);
        printf("Addition of %f and %f is %f",a,b,a+b);
        break;
    case'-':

        printf("Enter two operands:");
        scanf("%f %f",&a,&b);
        printf("Subtraction of %f and %f is %f",a,b,a-b);
        break;
        case'*':
        printf("Enter two operands:");
        scanf("%f %f",&a,&b);
        printf("Multiplecation of %f and %f is %f",a,b,a*b);
        break;
        case'/':
        printf("Enter two operands:");
        scanf("%f %f",&a,&b);
        printf("Division of %f and %f is %f",a,b,a/b);
        break;
        }

}
