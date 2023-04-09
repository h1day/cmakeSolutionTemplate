#include "lib2.h"

int offset() {
    return 2000;
}

LIB2_API int lib2_func(int x, int y) {
    return x + y + offset();
}