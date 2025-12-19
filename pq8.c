//Element Appears Once

#include <stdio.h>
int main() {
    int n, arr[100], x = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        x ^= arr[i];
    }

    printf("Unique = %d", x);
    return 0;
}