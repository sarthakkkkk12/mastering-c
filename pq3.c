// Palindrome Number (Striver)
#include <stdio.h>
int main() {
    int n, temp, rev = 0, digit;
    scanf("%d", &n);

    temp = n;
    while(temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    if(n == rev) printf("Palindrome");
    else printf("Not Palindrome");

    return 0;
} 