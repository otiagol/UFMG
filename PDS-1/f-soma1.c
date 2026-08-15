void soma1(int*s){// n poderia colocar &s pq a n existe ainda preciso criar a variavel int*s
    (*s)++; //como quero mexer no conteudo da memoria em que esta gurdado em s uso a "ponte" *s
}