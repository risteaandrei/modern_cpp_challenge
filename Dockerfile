FROM amd64/ubuntu:bionic
RUN apt-get update && apt-get install -y sudo git iputils-ping vim wget unzip python-dev
RUN apt-get install -y g++ cmake make
RUN apt-get install -y libgtest-dev && \
    cd /usr/src/gtest && \
    sudo cmake CMakeLists.txt && \
    sudo make && \
    sudo cp *.a /usr/lib
RUN wget https://dl.bintray.com/boostorg/release/1.67.0/source/boost_1_67_0.zip && \
    unzip boost_1_67_0.zip && \
    rm -r boost_1_67_0.zip && \
    mv boost_1_67_0/ boost && \
    cd boost && \
    ./bootstrap.sh && \
    ./b2 install
