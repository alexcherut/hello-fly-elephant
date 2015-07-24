#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f = fopen("hello.txt","wb");
    fprintf(f, "Hello, FlyElephant!\n");
    fclose(f);
    return 0;
}
