#ifndef SM4_H
#define SM4_H

#define SM4_ENCRYPT 1
#define SM4_DECRYPT 0

typedef struct {
	int mode;
	unsigned long rk[32];
} sm4_context;

void sm4_setKey_encrypt(sm4_context *contex, unsigned char key[16]);

void sm4_setKey_decrypt(sm4_context *contex, unsigned char key[16]);

void sm4_crypt(sm4_context *contex,
				int mode,
				int length,
				unsigned char *input,
				unsigned char *output);

#endif