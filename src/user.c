//
// Created by J.R on 2020/01/06.
//

#include <stdio.h>

#include "user.h"

char *get_user_name(void) {
    return "jujin";
}
char *get_user_id(void) {
    return "jujin1324";
}
char *get_user_password(void) {
    return "1234";
}

void print_user_info() {
    printf("name : %s\nid : %s\npassword: %d\n", get_user_name(), get_user_id(), get_user_password());
}