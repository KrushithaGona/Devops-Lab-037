#include <stdio.h>

int main() {
    int num = 7, i, flag = 0;

    for(i = 2; i <= num/2; i++) {
        if(num % i == 0) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Prime Number");
    else
        printf("Not Prime");

    return 0;
}
