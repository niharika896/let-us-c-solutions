#include <stdio.h>

int main() {
    int dec, i = 0,j;
    int arr[100];

    printf("Enter decimal number: ");
    scanf("%d", &dec);
    while(dec != 0) {
        arr[i] = dec % 2;
        dec /= 2;
        i++;
    }

    for(j = i - 1; j >= 0; j--) {
        printf("%d", arr[j]);
    }

    printf("\n");
    return 0;
}

