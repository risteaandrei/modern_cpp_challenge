#include <gtest/gtest.h>
#include "../server.h"

void run_server(short const port) {
    try {
        boost::asio::io_context context;
        server srv(context, port);
        context.run();
    } catch (std::exception& e) {
        std::cerr << "exception: " << e.what() << std::endl;
    }
}

int main() {
    run_server(11234);
}
