#ifndef SCRYPT_H
#define SCRYPT_H

#ifdef __cplusplus
extern "C" {
#endif

void scrypt_1024_1_1_256(const char* input, char* output);
void scrypt_1024_1_1_256_sp(const char* input, char* output, char* scratchpad);
const int scrypt_scratchpad_size = 131583;

int crypto_scrypt(const uint8_t *, size_t, const uint8_t *, size_t, uint64_t,
    uint32_t, uint32_t, uint8_t *, size_t);

void hybridScryptHash256(const char *input, char *output, unsigned int nBits);

#ifdef __cplusplus
}
#endif

#endif
