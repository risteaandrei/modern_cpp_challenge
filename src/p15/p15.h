#include <array>
#include <iostream>

class ipv4 {
    std::array<unsigned char, 4> data;

public:
    ipv4(): data{{0}} {}
    ipv4(const unsigned char a,
         const unsigned char b,
         const unsigned char c,
         const unsigned char d): data{{a, b, c, d}} {}
    ipv4(const unsigned long a):
        data{{static_cast<unsigned char>((a >> 24) & 0xFF),
              static_cast<unsigned char>((a >> 16) & 0xFF),
              static_cast<unsigned char>((a >> 8) & 0xFF),
              static_cast<unsigned char>(a & 0xFF)}} {}
    
    bool operator==(const ipv4& other) const {
        return data == other.data;
    }
    
    friend std::ostream& operator<<(std::ostream& s, const ipv4& ip);
    friend std::istream& operator>>(std::istream& s, ipv4& ip);
};

std::ostream& operator<<(std::ostream& s, const ipv4& ip);
std::istream& operator>>(std::istream& s, ipv4& ip);
