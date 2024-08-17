#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char get_class(int first_octet) {
    if (first_octet >= 0 && first_octet <= 127) {
        return 'A';
    } else if (first_octet >= 128 && first_octet <= 191) {
        return 'B';
    } else if (first_octet >= 192 && first_octet <= 223) {
        return 'C';
    } else if (first_octet >= 224 && first_octet <= 239) {
        return 'D';
    } else if (first_octet >= 240 && first_octet <= 255) {
        return 'E';
    } else {
        return 'N'; // Invalid range
    }
}

int main() {
    char ip[16];
    int first_octet;

    printf("Enter an IP address: ");
    scanf("%15s", ip);

    // Extract the first octet
    char *token = strtok(ip, ".");
    first_octet = atoi(token);

    char ip_class = get_class(first_octet);

    if (ip_class == 'N') {
        printf("Invalid IP address.\n");
    } else {
        printf("The IP address belongs to Class %c.\n", ip_class);
    }

    return 0;
}
