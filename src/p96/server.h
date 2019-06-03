#define ASIO_STANDOLONE
#include <boost/asio.hpp>

class server {
public:
    server(boost::asio::io_context& context, short const port);
private:
    void accept();

    boost::asio::ip::tcp::acceptor tcp_acceptor;
    boost::asio::ip::tcp::socket tcp_socket;
};
