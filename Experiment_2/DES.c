#include <stdio.h>
#include <string.h>
#include <openssl/des.h>

int main() {
    // Max 8 characters + null terminator
    char input[9];  

    // Read max 8 characters
    printf("Enter text (max 8 chars): ");
    scanf("%8s", input);

    // Prepare 8-byte plaintext
    DES_cblock plaintext = {0};
    strncpy((char *)plaintext, input, 8);

    // 8-byte DES key
    DES_cblock key = {0x23, 0x45, 0x67, 0x89, 0xAB, 0xCD, 0xEF, 0x01};
    DES_key_schedule key_schedule;
    DES_set_key_checked(&key, &key_schedule);

    // Output blocks
    DES_cblock ciphertext, decryptedtext;

    // 1. Encrypt
    DES_ecb_encrypt(&plaintext, &ciphertext, &key_schedule, DES_ENCRYPT);

    printf("Encrypted text (hex): ");
    for (int i = 0; i < 8; i++) {
        printf("%02X ", ciphertext[i]);
    }
    printf("\n");

    // 2. Decrypt
    DES_ecb_encrypt(&ciphertext, &decryptedtext, &key_schedule, DES_DECRYPT);

    printf("Decrypted text: %s\n", decryptedtext);

    return 0;
}
