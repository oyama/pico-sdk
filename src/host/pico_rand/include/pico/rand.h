#ifndef _PICO_RAND_H
#define _PICO_RAND_H

typedef struct rng_128 {
    uint64_t r[2];
} rng_128_t;

void get_rand_128(rng_128_t *rand128);

uint64_t get_rand_64(void);

uint32_t get_rand_32(void);

#endif
