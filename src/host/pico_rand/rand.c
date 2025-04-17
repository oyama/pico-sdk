#include <string.h>
#include <stdint.h>
#include "pico/rand.h"


void get_rand_128(rng_128_t *rand128) {
    memset(rand128, 0, sizeof(rng_128_t));
}

uint64_t get_rand_64(void) {
    return 0;
}

uint32_t get_rand_32(void) {
    return 0;
}
