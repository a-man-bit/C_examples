#include<stdio.h>
#include<math.h>
main(){
        float a,b,c;
        float root1,root2,imaginary;
        float discriminant;
        printf("Enter the values of a , b and c");
        scanf("%f %f %f",&a,&b,&c);
        discriminant=b*b - (4*a*c);
        if(discriminant>0){
            root1= -b+ sqrt(discriminant)/(2*a);
            root2=-b- sqrt(discriminant)/(2*a);
            printf("Two real and distinct root are exist % 2f % 2f",root1,root2);
        }
        if(discriminant<0){
                root1=root2=-b /(2*a);
                imaginary=sqrt(discriminant)/(2*a);
                 printf("Two imaginary roots are exist % 2f +i%2f and  % 2f - i.%2f.",root1,imaginary,root2,imaginary);


        }
        if(discriminant==0){
            root1=root2= -b/(2*a);
            printf("Two real and equal root are exist. % 2f and % 2f",root1,root2);
        }
}
