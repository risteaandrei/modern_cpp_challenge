#include "p15.h"

std::ostream& operator<<(std::ostream& s, const ipv4& ip) {
    return s << static_cast<int>(ip.data[0]) << "."
             << static_cast<int>(ip.data[1]) << "."
             << static_cast<int>(ip.data[2]) << "."
             << static_cast<int>(ip.data[3]);
}

std::istream& operator>>(std::istream& s, ipv4& ip) {
    char d1, d2, d3;
    int b1, b2, b3, b4;

    s >> b1 >> d1 >> b2 >> d2 >> b3 >> d3 >> b4;

    if (d1 == '.' && d2 == '.' && d3 == '.') {
        ip = ipv4(b1, b2, b3, b4);
    } else {
        s.setstate(std::ios_base::failbit);
    }

    return s;
}
