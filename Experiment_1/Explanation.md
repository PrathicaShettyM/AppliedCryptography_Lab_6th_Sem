# **Experiment 1**

## **1. Caesar Cipher**
- The **Caesar Cipher** is a `substitution cipher` where each letter in the plaintext is shifted a fixed number of places down the alphabet.

### **Encryption (C) = (P + K) mod 26**
```c
    char p = ch-'A';
    p = ((p + k) % 26) + 'A';
```

### **Decryption (P) = (C - K + 26) mod 26**
```c
    p = ((p - k + 26) % 26) + 'A';
```

### Output

```bash
Enter the text: encryptThisText
Enter the key: 3
Encrypted Text: hqfubswWklvWhaw
Decrypted Text: encryptThisText
```

## **2. Rail Fence Cipher**
- The **Rail Fence Cipher** is a **transposition cipher**. It rearranges the characters of the plaintext without changing the actual letters.
- Uses a zig-zag or “rail” pattern across multiple rows.
- Letters are written in a zig-zag pattern and then read row-by-row.

### **Encryption Logic**
```c
    char input = "hello"
    for (int i = 0; input[i] != '\0'; i++) {
        if (i % 2 == 0) {
            s1[j++] = input[i];  // Even index
        } else {
            s2[k++] = input[i];  // Odd index
        }
    }
    s1 -> hlo
    s2 -> el
    s1+s2 -> hloel
```

### **Decryption Logic**
```c
    for (int i = 0; i < len; i++) {
        if (i % 2 == 0)
            decrypted[i] = encrypted[j++];         // from first half
        else
            decrypted[i] = encrypted[mid + k++];   // from second half
    }
```

### Output
```bash
Enter the input string: hello
Encrypted text: hloel
Decrypted text: hello
```