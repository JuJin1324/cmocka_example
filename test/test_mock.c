//
// Created by J.R on 2020/01/06.
//

#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

char *__wrap_get_user_name(void) {
    return (char *)mock();
}

static void test_mock_user_name(void **state) {
    will_return(__wrap_get_user_name, "mock~");
    void print_user_info();
}

int main(void) {
    const UnitTest tests[] = {
            unit_test(test_mock_user_name)
    };

    return run_tests(tests);
}