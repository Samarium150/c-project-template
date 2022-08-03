#include <stdio.h>

#include "print_utils.h"

void print_uint8_array(const unsigned char *arr, const size_t len) {
    for (size_t i = 0; i < len; ++i) {
        if (i == len - 1) {
            printf("0x%02x\n", arr[i]);
        } else {
            printf("0x%02x,", arr[i]);
        }
    }
}

void print_uint16_array(const unsigned short *arr, const size_t len) {
    for (size_t i = 0; i < len; ++i) {
        if (i == len - 1) {
            printf("0x%04x\n", arr[i]);
        } else {
            printf("0x%04x,", arr[i]);
        }
    }
}

void print_uint32_array(const unsigned int *arr, const size_t len) {
    for (size_t i = 0; i < len; ++i) {
        if (i == len - 1) {
            printf("0x%08x\n", arr[i]);
        } else {
            printf("0x%08x,", arr[i]);
        }
    }
}

void print_uint64_array(const size_t *arr, const size_t len) {
    for (size_t i = 0; i < len; ++i) {
        if (i == len - 1) {
            printf("0x%llx\n", arr[i]);
        } else {
            printf("0x%llx,", arr[i]);
        }
    }
}
