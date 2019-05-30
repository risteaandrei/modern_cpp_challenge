#include <string>

std::string fizzbuzz(int const number) {
    int m3 = number % 3;
    int m5 = number % 5;

    return (m3 == 0 && m5 == 0) ? "fizzbuzz" :
           (m3 == 0) ? "fizz" :
           (m5 == 0) ?  "buzz" :
           std::to_string(number);
}
