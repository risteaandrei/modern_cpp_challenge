# Add source files
file(SRCS  *.cpp)
list(FILTER SRCS EXCLUDE REGEX ".*(test_|all_tests|CMake).*")
list(FILTER SRCS EXCLUDE REGEX ".*/p96/test/.*")
# Add test files
file(GLOB_RECURSE TEST_SRCS test_*.cpp)

SET (TEST_SRCS ${SRCS} ${TEST_SRCS} gtest/all_tests.cpp)

# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests ${TEST_SRCS})
target_link_libraries(runTests ${GTEST_LIBRARIES} ${Boost_LIBRARIES} pthread)
