#include <stdio.h>

int main() {
	long long int bin;
    int sum = 0, mult = 1;

    printf("Enter binary number: ");
    scanf("%lld", &bin);

    while(bin != 0) {
        sum += (bin % 10) * mult;
        bin /= 10;
        mult *= 2;
    }

    printf("%d is the decimal equivalent\n", sum);

    return 0;
}

