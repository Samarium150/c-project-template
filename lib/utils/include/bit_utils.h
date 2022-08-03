#ifndef __BIT_UTILS_H__
#define __BIT_UTILS_H__

#include <stdint.h>

/** public interfaces */

/**
 * convert the value into a binary string
 */
char *const to_binary(int64_t, size_t);

/**
 * get the idx-th bit of the value
 */
uint8_t get_bit(const uint8_t *, size_t);

/**
 * get len bits of the value starting at idx
 */
uint64_t get_bits(const uint8_t *, size_t, size_t);

/**
 * set bits of dst as value starting at idx
 */
void set_bits(uint8_t *, size_t, uint8_t);

/**
 * set len bits of dst as value starting at idx
 */
void set_n_bits(uint8_t *, size_t, uint64_t, size_t);

#endif /* __BIT_UTILS_H__ */
