#include "p03.h"
#include "../p02/p02.h"

#include <numeric>

unsigned int lcm(unsigned int const a, unsigned int const b) {
    unsigned d = gcd(a,b);
    return d ? (a*b/d) : 0;
}

unsigned int lcmr(std::vector<unsigned int> const & v) {
    return std::accumulate(v.begin(), v.end(), 1, lcm);
}