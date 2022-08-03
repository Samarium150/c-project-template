#include <stdlib.h>

#include "bit_utils.h"

char *const to_binary(const int64_t n, const size_t len) {
    char *const binary = (char *)calloc(len + 1, sizeof(char));
    size_t k = 0;
    for (size_t i = (1ULL << (len - 1)); i > 0; i /= 2) {
        binary[k++] = ((n & i) != 0) ? '1' : '0';
    }
    binary[k] = '\0';
    return binary;
}

uint8_t get_bit(const uint8_t *value, const size_t idx) {
    return (value[idx >> 3] >> (idx & 7)) & 1;
}

uint64_t get_bits(const uint8_t *value, const size_t idx, const size_t len) {
    uint64_t bits = 0;
    for (size_t i = 0; i < len; ++i) {
        bits |= (uint64_t)get_bit(value, idx + i) << i;
    }
    return bits;
}

void set_bits(uint8_t *dst, const size_t idx, const uint8_t value) {
    dst[idx >> 3] = (dst[idx >> 3] & ~(0x1 << (idx & 7))) | (value << ((idx & 7)));
}

void set_n_bits(uint8_t *dst, const size_t idx, const uint64_t value, const size_t len) {
    set_bits(dst, idx, get_bits((uint8_t *)&value, 0, len));
}
