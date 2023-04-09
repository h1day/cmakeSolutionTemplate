#include "lib1.h"

int offset() {
    return 1000;
}

LIB1_API int lib1_func(int x, int y) {
    return x + y + offset();
}