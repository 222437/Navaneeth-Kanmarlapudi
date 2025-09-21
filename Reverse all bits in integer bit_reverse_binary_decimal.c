#include <stdio.h>
#include <stdint.h>

void getBinary16(uint16_t n, char* binary) {
    for (int i = 15; i >= 0; i--) {
        binary[15 - i] = (n & (1 << i)) ? '1' : '0';
    }
    binary[16] = '\0';
}

int countSetBitPairs(int n) {
    uint16_t n16 = (uint16_t)n;
    char bin[17];
    getBinary16(n16, bin);

    int count = 0;
    for (int i = 0; i < 15; i++) {
        if (bin[i] == '1' && bin[i + 1] == '1') {
            count++;
        }
    }
    return count;
}

int main() {
    int test_cases[] = {-1, -3, -5234, 65, 0, 85363};
    int size = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < size; i++) {
        int n = test_cases[i];
        int result = countSetBitPairs(n);
        printf("Input: %d\tOutput: %d\n", n, result);
    }

    return 0;
}
