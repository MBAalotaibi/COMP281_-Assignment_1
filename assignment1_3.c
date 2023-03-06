#include <stdio.h>

#define MAX_DIGITS 100

int main() {
    // Declare variables
    char num1[MAX_DIGITS + 1], num2[MAX_DIGITS + 1], result[MAX_DIGITS + 2];
    int carry = 0, len1 = 0, len2 = 0, i, j;

    // Read input strings
    scanf("%s", num1);
    scanf("%s", num2);

    // Get lengths of input strings
    while (num1[len1] != '\0') {
        len1++;
    }
    while (num2[len2] != '\0') {
        len2++;
    }

    // Add corresponding digits and store result in result array
    i = len1 - 1;
    j = len2 - 1;
    int k = 0;
    while (i >= 0 || j >= 0 || carry) {
        int digit1 = 0, digit2 = 0;
        if (i >= 0) {
            digit1 = num1[i] - '0';
            i--;
        }
        if (j >= 0) {
            digit2 = num2[j] - '0';
            j--;
        }
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result[k] = (sum % 10) + '0';
        k++;
    }
    result[k] = '\0';
int m;
    // Reverse the result array
    for (m = 0; m < k / 2; m++) {
        char temp = result[m];
        result[m] = result[k - m - 1];
        result[k - m - 1] = temp;
    }

    // Print result
    printf(result);

    return 0;
}

