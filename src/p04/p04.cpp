#include "p4.h"

bool is_prime(unsigned int number) {
    for (unsigned int i = 2; i * i < number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

unsigned int largest_prime(unsigned int limit) {
    for (unsigned int i = limit - 1; i > 1; --i) {
        if (is_prime(i)) {
            return i;
        }
    }

    return 0;
}
