#include <stdio.h>

void encrypt(char text[], int key) {
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        
        // encrypt uppercase letters
        if (ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A' + key) % 26) + 'A';
            text[i] = ch;
        }

        // encrypt lowercase letters
        else if (ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a' + key) % 26) + 'a';
            text[i] = ch;
        }
    }
}

void decrypt(char text[], int key) {
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];

        // decrypt uppercase letters
        if (ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A' - key + 26) % 26) + 'A';
            text[i] = ch;
        }

        // decrypt lowercase letters
        else if (ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a' - key + 26) % 26) + 'a';
            text[i] = ch;
        }
    }
}

int main() {
    char text[100];
    int key, choice;

    printf("Enter the plaintext: ");
    scanf("%s", text);  
    printf("Enter the key: ");
    scanf("%d", &key);


    encrypt(text, key);
    printf("Encrypted Text: %s\n", text);

    decrypt(text, key);
    printf("Decrypted Text: %s\n", text);


    return 0;
}
