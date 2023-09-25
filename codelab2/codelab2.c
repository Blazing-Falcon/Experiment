#include <stdio.h>

int main() {
	int apples = 5;
	int bananas = 8;
	float orangePrice = 1.5;
	float bananaPrice = 0.75;
	char currency = '$';

    float totalCost = (apples * orangePrice) + (bananas * bananaPrice);

    printf("Jumlah apel: %d\n", apples);
    printf("Jumlah pisang: %d\n", bananas);
    printf("Harga jeruk per buah: %.2f %c\n", orangePrice, currency);
    printf("Harga pisan per buah: %.2f %c\n", bananaPrice, currency);
    printf("Total biaya: %.2f %c\n", totalCost, currency);

    return 0;
}