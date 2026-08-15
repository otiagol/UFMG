#include <limits.h>
unsigned long long fast_pow_2(int exp){
    unsigned long long temp= (ULLONG_MAX/ULLONG_MAX)<<exp;
    return temp;
}