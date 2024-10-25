#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_ipv4(unsigned char ipv4[4]) {
    for (int i = 0; i < 4; i++) {
        ipv4[i] = rand() % 256;
    }
}

void generate_random_ipv6(unsigned short ipv6[8]) {
    for (int i = 0; i < 8; i++) {
        ipv6[i] = rand() % 65536;
    }
}

void print_ipv4(unsigned char ipv4[4]) {
    printf("IPv4 Address:\n");
    printf("  Decimal    : %d.%d.%d.%d\n", ipv4[0], ipv4[1], ipv4[2], ipv4[3]);
    printf("  Binary     : ");
    for (int i = 0; i < 4; i++) {
        for (int j = 7; j >= 0; j--) {
            printf("%d", (ipv4[i] >> j) & 1);
        }
        if (i < 3) printf(".");
    }
    printf("\n  Hexadecimal: %02x.%02x.%02x.%02x\n", ipv4[0], ipv4[1], ipv4[2], ipv4[3]);
}

void print_ipv6(unsigned short ipv6[8]) {
    printf("IPv6 Address:\n");
    printf("  Decimal    : ");
    for (int i = 0; i < 8; i++) {
        printf("%d", ipv6[i]);
        if (i < 7) printf(":");
    }
    printf("\n  Binary     : ");
    for (int i = 0; i < 8; i++) {
        for (int j = 15; j >= 0; j--) {
            printf("%d", (ipv6[i] >> j) & 1);
        }
        if (i < 7) printf(":");
    }
    printf("\n  Hexadecimal: ");
    for (int i = 0; i < 8; i++) {
        printf("%04x", ipv6[i]);
        if (i < 7) printf(":");
    }
    printf("\n");
}

int main() {
    srand(time(NULL));

    unsigned char ipv4[4];
    unsigned short ipv6[8];
    generate_random_ipv4(ipv4);
    generate_random_ipv6(ipv6);

    print_ipv4(ipv4);
    printf("\n");
    print_ipv6(ipv6);

    return 0;
}
