#include <math.h>
#include "prime.h"

int is_prime (const int x) {
    if(x < 2) {
        return -1;   // returns -1 for undefined
    }
    if(x < 4) {
        return 1;    // returns 1 for prime number
    }
    if((x%2) == 0) {
        return 0;    // returns 0 for composite number
    }
    for (int i = 3; i <= floor(sqrt((double)x)); i+=2) {
        if((x % i) == 0) {
            return 0;
        }
    }
    return 1;
}

int next_prime(int x) {
    while(is_prime(x) != 1){
        x++;
    }
    return x;
}
