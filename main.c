#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f = fopen("hello.txt","wb");
    fprintf(f, "Hello, FlyElephant!\n");
    printf("Hello, stdout!\n");
    fclose(f);
    return 0;
}
