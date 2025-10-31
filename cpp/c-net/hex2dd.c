#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<assert.h>
uint32_t htoi(const char * s) {
    if (s[0] == '0') {
        s+=2;
    }
    uint32_t rslt = 0;
    
    while(*s) {
        rslt <<= 4;
        if (*s >= '0' && *s <='9') {
            rslt += *s - '0';
        } else {
            assert(*s >= 'a' && *s <= 'f');
            rslt += 10 + *s - 'a';
        }
        s++;
    }

    return rslt;
}
int main(int argc, const char * args[]) {
    if (argc < 2) {
        printf("usage ./a.out ip\n");
        return 0;
    }

    uint32_t ip = htoi(args[1]);
    
    const char buffer[256];
    uint32_t ip_net = htonl(ip);
    
    const char * ret = inet_ntop(AF_INET, &ip_net, buffer, 16);
    if (!ret) {
        perror("error in inet_ntop\n");
    } else {
        printf("%s\n", ret);
    }
    return 0;
}