#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num & 1)
        printf("ODD");
    else
        printf("EVEN");

    return 0;
}