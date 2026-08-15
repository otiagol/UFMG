#include <stdio.h>
typedef struct evento{
    char nm[51];
    char lcl[51];
    int dt[3];
}evento;
void conferedata(int data[3], int n, evento vetor[n]){
    int i=0, k=1;
    for(i=0; i<n; i++){
        if(data[0]==vetor[i].dt[0] && data[1]==vetor[i].dt[1] && data[2]==vetor[i].dt[2]){
            printf("%s%s", vetor[i].nm, vetor[i].lcl);
            k=0;
        }
    }
    if(k){
        printf("Nenhum evento encontrado!");
    }
}
int main(){
    int n=0, i=0, k=0;
    int data[3];
    scanf("%d", &n);
    getchar();
    evento v[n];
    for(i=0; i<n; i++){
        fgets(v[i].nm, 51, stdin);
        fgets(v[i].lcl, 51, stdin);
        for(k=0; k<3; k++){
            scanf("%d", &v[i].dt[k]);
        }
        getchar();
    }
    for(i=0; i<3; i++){
        scanf("%d", &data[i]);
    }
    conferedata(data, n, v);
return 0;
}