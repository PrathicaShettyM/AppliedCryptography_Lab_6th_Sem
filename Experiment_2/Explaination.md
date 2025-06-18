# **Experiment 2**

## **DES (Data Encryption Standard) - ECB version**
- DES is a **symmetric-key block cipher** used for secure data encryption.
- **Symmetric**: Same key for encryption and decryption.
- **Block Cipher**: Processes fixed-size blocks (64 bits = 8 bytes).

## Basic Concepts

| Term           | Meaning                                  |
|----------------|-------------------------------------------|
| Block Size     | 64 bits (8 bytes)                         |
| Key Size       | 56 bits effective (64 bits with parity)   |
| Rounds         | 16 Feistel rounds                         |
| Encryption     | Done on 64-bit chunks                     |
| Mode Used      | ECB (Electronic Codebook) in lab examples |


## DES Logic
### 1. Encryption:
1. Takes 8-byte plain text.
2. Splits it into two halves: Left and Right.
3. Goes through **16 rounds** of permutations and substitutions.
4. Uses a **56-bit key schedule**.
5. Outputs 8-byte ciphertext.


```bash
Enter text (max 8 chars): PRATHICA
Encrypted text: C5 F9 5D B4 F4 3B C3 A1 
Decrypted text: PRATHICA
```