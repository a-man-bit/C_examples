#include <stdio.h>
int main() {
    int n, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        //printf("%d rem.\n",remainder);
        rev = rev * 10 + remainder;
        //printf("\n%d rev.\n",rev);
        n /= 10;
      //  printf("%d n. \n",n);
    }
    printf("Reversed number = %d", rev);
    return 0;
}
