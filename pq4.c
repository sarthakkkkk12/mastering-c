// Armstrong Number (Striver)
#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digit, sum = 0;
    scanf("%d", &n);

    temp = n;
    while(temp > 0) {
        digit = temp % 10;
        sum += pow(digit, 3);
        temp /= 10;
    }

    if(sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}