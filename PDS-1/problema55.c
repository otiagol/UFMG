int populacao(unsigned long haba, double txa, unsigned long habb, double txb){//haba<habb txa>txb
    int ano=0;
    while(haba<habb){
        haba+=(haba*txa/100);
        habb+=(habb*txb/100);
        ano++;
    }
return ano;
}