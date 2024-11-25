
#include <stdio.h>

void println(const char *const format, ...) {
    printf(format);
    printf("\n");
}

int main() {
    println("Hello World");
    return 0;
}
