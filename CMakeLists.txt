cmake_minimum_required(VERSION 3.15)
project(cmocka_example C)

set(CMAKE_C_STANDARD 99)

include_directories(/usr/local/include)

add_executable(test_fixtures.out test/test_fixtures.c)
target_link_libraries(test_fixtures.out -L/usr/local/lib cmocka)

add_executable(test_exception_handler.out test/test_exception_handler.c)
target_link_libraries(test_exception_handler.out -L/usr/local/lib cmocka)

add_executable(test_mock.out test/test_mock.c src/user.c src/user.h)
target_link_libraries(test_mock.out -L/usr/local/lib cmocka)
target_link_libraries(test_mock.out -Wl,--wrap=get_user_name)