#define ASIO_STANDOLONE
#include <boost/asio.hpp>

#include <string>

class session: public std::enable_shared_from_this<session> {
public:
    session(boost::asio::ip::tcp::socket socket): tcp_socket(std::move(socket)) {}
    void start();
private:
    void read();
    void write(std::string_view response);

    std::array<char, 1024> data;
    boost::asio::ip::tcp::socket tcp_socket;
};
