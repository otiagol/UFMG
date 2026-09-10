int Racional::MDC(int a, int b){//como esta separada da class, preciso especificar da onde ela vem
    if(a == 0) return b;
    if (b == 0) return a;
    return MDC(b, a % b);
}
void Racional::simplificar(){// a funcao e inteligente o suficiente pra saber q é pra usar quem esta chamando ela, sendo meio q um parametro indireto
    int div= MDC(num, den);//dentro de uma funcao c o msm sobrenome n preciso falar o sobrenome
    this->num= this->num/div;//this significa a variavel q chamou a funcao
    this->den= this->den/div;
}
//n e uma funcao e um construtor
Racional::Racional(){//um construtor n e igual uma variavel normal, ele so aceita aquilo q foi ensinado
    num=0;           //se n tivesse este n poderia fazer oq fiz na funcao de soma, de criar um construtor sem declarar nada nele
    den=1;
    simplificar();
}
Racional::Racional(int a){
    num=a;
    den=1;
    simplificar();
}
Racional::Racional(int a, int b){
    num=a;
    den=b;
    simplificar();
}
Racional Racional::soma(Racional x){
    Racional y;
    y.num= (num * x.den)+(den * x.num);
    y.den= den * x.den;
    return y;
}
