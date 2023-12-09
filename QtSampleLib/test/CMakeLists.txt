set(target qt-sample-lib-test)

add_executable(${target}
        TestClassTest.cpp)

target_link_libraries(${target} PRIVATE
        GTest::gtest_main
        qt-sample-lib
        )

enable_testing()
find_package(GTest)
include(GoogleTest)

gtest_discover_tests(${target} WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/QtSampleLib/test)

add_test(NAME ${target}
         COMMAND ${target})