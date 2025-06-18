# 🔐 **Experiment 3**

## **AES (Advanced Encryption Standard)**

- AES is a **symmetric block cipher** used worldwide to encrypt secure data.
- Replaced DES which had weak key size.

### Basic Concepts

| Components     | Size of these components                 |
|----------------|------------------------------------------|
| Type           | Symmetric-key block cipher               |
| Block Size     | 128 bits (16 bytes)                      |
| Key Sizes      | 128, 192, or 256 bits                    |
| Rounds         | 10 (128-bit), 12 (192-bit), 14 (256-bit) |
| Structure      | Substitution-permutation network         |


### AES Logic
1. **Key Expansion**: Original key generates round keys
2. **Initial Round**:
   - AddRoundKey
3. **Rounds (9x)**:
   - SubBytes (byte substitution using S-box)
   - ShiftRows (row shifting)
   - MixColumns (column mixing)
   - AddRoundKey (XOR with round key)
4. **Final Round**:
   - SubBytes
   - ShiftRows
   - AddRoundKey

### Output
```bash
Enter text (max 16 chars): hello123
Encrypted text (hex): D4 65 2E 45 91 C4 26 C2 8A 17 97 4E B6 F3 8B 3A 
Decrypted text: hello123        
```