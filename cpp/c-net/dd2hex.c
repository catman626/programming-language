#include <stdlib.h>
#include<arpa/inet.h>


int main(int argc, const char * args[]) {
    if (argc < 2) {
        printf("please offer args\n");
        return 0;
    }

    uint32_t ip;
    int stat = inet_pton(AF_INET, args[1], &ip);
    ip = ntohl(ip);
    if (stat == 0) {
        perror("conveting error");
    } else {
        printf("ip: %x\n", ip);
    }

    return 0;
}