//
// Created by J.R on 2020/01/06.
//

#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#include <stdlib.h>

struct test_segv {
    int x;
    int y;
};

static void test_segfault_recovery(void **state)
{
    struct test_segv *s = NULL;

    (void) state; /* unused */

    s->x = 1;
}

int main(void) {
    const UnitTest tests[] = {
            unit_test(test_segfault_recovery),
    };

    return run_tests(tests);
}