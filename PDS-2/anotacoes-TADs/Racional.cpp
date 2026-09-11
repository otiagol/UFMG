#include "Racional.h"

int Racional::MDC(int a, int b){//como esta separada da class, preciso especificar da onde ela vem
    if(a == 0) return b;
    if (b == 0) return a;
    return MDC(b, a % b);
}
//obs:this e um ponteiro q guarda o end de memoria da variavel q chamou a funcao, porem ele n e nescessario, o computador consegue fazer ele implicitamente
// a funcao e inteligente o suficiente pra saber q é pra usar quem esta chamando ela, sendo meio q um parametro indireto, e fazendo o this ser obsoleto
void Racional::simplificar(){
    if(this->den<0){
        this->num= -this->num;
        this->den= -this->den;
    }
    int div= MDC(num, den);//dentro de uma funcao c o msm sobrenome n preciso falar o sobrenome
    this->num= this->num/div;//this significa a variavel q chamou a funcao
    this->den= this->den/div;
}
//n e uma funcao e um construtor
Racional::Racional(){//um construtor n e igual uma variavel normal, ele so aceita aquilo q foi ensinado
    num=0;           //se n tivesse este n poderia fazer oq fiz na funcao de soma, de criar um construtor sem declarar nada nele
    den=1;
    this->simplificar();
}
Racional::Racional(int a){
    num=a;
    den=1;
    this->simplificar();
}
Racional::Racional(int a, int b){
    num=a;
    den=b;
    this->simplificar();
}
Racional Racional::operator+(Racional x){
    int nnum= (this->num * x.den)+(this->den * x.num);
    int dden= this->den * x.den;
    return Racional(nnum, dden);
}
Racional Racional::simetrico(){
    return Racional(-this->num, this->den);
}
Racional Racional::operator-(Racional x){
    return *this + (x.simetrico());
}
Racional Racional::operator*(Racional x){
    return Racional(num * x.num, den * x.den);
}
Racional Racional::inverte(){
    if(den==0) return *this;
    return Racional(den, num);
}
Racional Racional::operator/(Racional x){
    return *this * x.inverte();
}
bool Racional::operator==(Racional x) {
    if (num == x.num && den == x.den) {
        return true; 
    } else {
        return false;
    }
}