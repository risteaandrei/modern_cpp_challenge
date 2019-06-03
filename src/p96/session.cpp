#include "session.h"

#include <iostream>

namespace {
std::string fizzbuzz(int const number) {
    int m3 = number % 3;
    int m5 = number % 5;

    return (m3 == 0 && m5 == 0) ? "fizzbuzz" :
           (m3 == 0) ? "fizz" :
           (m5 == 0) ?  "buzz" :
           std::to_string(number);
}
}

void session::start() {
    read();
}

void session::read() {
    auto self(shared_from_this());

    tcp_socket.async_read_some(
        boost::asio::buffer(data, data.size()),
        [this, self](std::error_code const ec, std::size_t const length) {
            if (!ec) {
                auto number = std::string(data.data(), length);
                auto result = fizzbuzz(std::atoi(number.c_str()));
                std::cout << number << "->" << result << std::endl;
                write(result);
            }
        }
    );
}

void session::write(std::string_view response) {
    auto self(shared_from_this());

    tcp_socket.async_write_some(
        boost::asio::buffer(response.data(), response.length()),
        [this, self](std::error_code const ec, std::size_t const) {
            if (!ec) {
                read();
            }
        }
    );
}
