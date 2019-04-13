#include "gcd.h"

unsigned int gcd(unsigned int const a, unsigned int const b) {
    // Euclid algorithm
    return b == 0 ? a: gcd(b, a%b);
}