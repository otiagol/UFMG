#include <stdio.h>
int main(){
    char P= 'P', D= 'D', S='S', h='-', i='1';
    int s= P+D+S+h+i, m= P*D*S*h*i;
    printf("%d %d\n", s, m);
    return 0;
}