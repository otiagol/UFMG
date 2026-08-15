#include <stdio.h>
struct instant {
  int hour;
  int minute;
  int second;
};
int instant_parse(const char* str, struct instant *init){
  int itens_lidos=sscanf(str, "%d:%d:%d", &init->hour, &init->minute, &init->second);//vc entrega uma string e ele verifica quantos itens leu, dos parametros passados, e tbm completa a struct
  if(itens_lidos=!3){
    return 1;
  }
return 0;
}
int instant_check(struct instant i){
  if((i.hour>=0 && i.hour<=23) && (i.minute>=0 && i.minute<=59) && (i.second>=0 && i.second<=59)){
    return 1;
  }
return 0;
}
int instant_compare(struct instant i1, struct instant i2){
  if(i1.hour>i2.hour)return 1;//1 maior q 2
  if(i1.hour<i2.hour)return -1;//1 menor q 2
  //se passar daqui as horas sao igauis, ent vai desempatar nos minutos
  if(i1.minute>i2.minute)return 1;
  if(i1.minute<i2.minute)return -1;
  //se passar daqui os minutos sao iguais
  if(i1.second>i2.second)return 1;
  if(i1.second<i2.second)return -1;
return 0;
}
void instant_read_vector(struct instant *v, int n){//v e um vetor de strcut instant, cada argumento dele e uma struct
  int i=0;
  char cfrinst[69];
  struct instant temp;
  while(i<n){
    scanf("%68s", cfrinst);//le 68 caracateres e para nos ' ' oq ajuda mt na leitura dos dados, ja q os horario sao enviado sem espaco 
    if(!(instant_parse(cfrinst, &temp))){
      if(instant_check(temp)){
        v[i]=temp;
        i++;
      }
    }
  }
}
struct instant instant_largest(const struct instant *v, int n){
  struct instant maior=v[0];
  for(int i=1; i<n; i++){
    if(instant_compare(maior, v[i])==-1){
      maior=v[i];
    }
  }
return maior;
}