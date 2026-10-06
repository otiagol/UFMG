#include "dicionario.h"

Dicionario::Dicionario(){
    elementos_= nullptr;
    tElementos_= 0;
}

int Dicionario::tamanho(){
    return tElementos_;
}

bool Dicionario::pertence(string chave){
    return this->achar(chave)!= -1;
}

string Dicionario::menor(){
    string menor=elementos_[0].chave;
    for(int i=1; i <tElementos_; i++)
        if(elementos_[i].chave<menor)
                menor=elementos_[i].chave;
    return menor;
}

string Dicionario::valor(string chave){
    int i= this->achar(chave);
    return elementos_[i].valor;
}

void Dicionario::Inserir(string chave, string valor){
    this->Redimensionar(tElementos_ + 1);
    this->elementos_[tElementos_].chave = chave;
    this->elementos_[tElementos_].valor = valor;
    this->tElementos_++;
}

void Dicionario::Remover(string chave){
    int i= this->achar(chave);
    this->elementos_[i]= this->elementos_[tElementos_-1];//pega o ultimo para tapar o buraco
    tElementos_--;
}

void Dicionario::Alterar(string chave, string valor){
    int i= this->achar(chave);
    this->elementos_[i].valor = valor;
}

Dicionario::~Dicionario(){
    delete [] this->elementos_;
}

int Dicionario::achar(string s){
    for(int i=0; i < tElementos_; i++) 
        if(s == elementos_[i].chave)
            return i;
    return -1;
}

void Dicionario::Redimensionar(int m){
    Elemento* rcb= new Elemento[m];
    for(int i=0; i<this->tElementos_; i++){
        rcb[i]= this->elementos_[i];
    }
    delete[] this->elementos_;
    this->elementos_= rcb;
}
