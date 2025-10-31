#include <stdio.h>
typedef char NameBuffer[64];


int main() {

    int a[10] = {};
    for (int i = 0; i  < 10 ; i  ++) {
        printf("%d ", a[i]);
    }
    int * b = a + 1;
    *b = 1;
    
    for (int i = 0; i  < 10 ; i  ++) {
        printf("%d ", a[i]);
    }

    NameBuffer buff = "hello world!";
    printf("%s\n", buff +1);
    return 0;
}