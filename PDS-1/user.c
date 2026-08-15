#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct user {
    char *name;
    int idade;
    struct address *addr;
};
struct user *create_user(const char *input){
    struct user *x= NULL;
    char *info= NULL;
    info=strtok(input, "#");
    x=(struct user *)malloc(sizeof(struct user));
    x->name= (char *)malloc(strlen(info)+1);
    strcpy(x->name, info);
    info=strtok(NULL, "#");
    x->idade=atoi(info);
    x->addr =create_address(strtok(NULL, "#"));
    return x;
}
void free_user(struct user *user){
    free_address(user->addr);
    user->addr =  NULL;
    free(user->name);
    user->name=NULL;
    free(user);
    user=NULL;
}