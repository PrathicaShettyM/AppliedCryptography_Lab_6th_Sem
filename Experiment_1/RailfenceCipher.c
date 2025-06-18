#include <stdio.h>
#include <string.h>

void encrypt(char input[], char encrypted[]) {
    char s1[200], s2[200];
    int j = 0, k = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        if (i % 2 == 0) {
            s1[j++] = input[i];  // Even index
        } else {
            s2[k++] = input[i];  // Odd index
        }
    }

    s1[j] = '\0';
    s2[k] = '\0';

    strcpy(encrypted, s1); // copy s1 to encrypted and store result in encrypted
    strcat(encrypted, s2); // concat encypted and s2 and store res in encrypted
}

void decrypt(char encrypted[], char decrypted[]) {
    int len = strlen(encrypted);
    int mid = (len + 1) / 2;

    int j = 0, k = 0;

    for (int i = 0; i < len; i++) {
        if (i % 2 == 0)
            decrypted[i] = encrypted[j++];         // from first half
        else
            decrypted[i] = encrypted[mid + k++];   // from second half
    }

    decrypted[len] = '\0';
}

int main() {
    char input[200], encrypted[200], decrypted[200];
    int choice;

    printf("Enter the input string: ");
    scanf("%s", input);

    encrypt(input, encrypted);
    printf("Encrypted text: %s\n", encrypted);

    decrypt(encrypted, decrypted);
    printf("Decrypted text: %s\n", decrypted);

    return 0;
}
