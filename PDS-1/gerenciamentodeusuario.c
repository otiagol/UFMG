#include <stdio.h>
#include <stdlib.h>
struct user **create_user_database(int n){
    struct user **v= NULL;// == struct user *v[]= NULL; ==struct user v[][]= NULL;
    int i= 0, k=0;
    char info[300]; 
    v= (struct user **)malloc(n * sizeof(struct user *));//tipo ponteiro de ponteiro,n * tamanho vetor(ponteiro)de struct user
    if(v == NULL)return NULL;
    for(i=0; i<n; i++){
        fgets(info, 298, stdin);
        v[i]= create_user(info);
        if(v[i] == NULL){
            for(k=0; k<i; k++){
                free_user(v[k]);
            }
            free(v);
            v= NULL;
            return NULL;
        }
    }
return v;
}
void free_user_database(struct user **db, int n){
    if(db == NULL){
        return;
    }
    for(int k=0; k<n; k++){
        free_user(db[k]);
    }
    free(db);
}