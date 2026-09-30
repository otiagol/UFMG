#include "jogo_da_vida.h"

JogoDaVida::JogoDaVida(int l, int c){
    nLinhas= l;
    nColunas= c;
    vivas_= new bool*[l];
    for(int i=0; i<l; i++){
        vivas_[i]= new bool[c];
        for(int k=0; k<c; k++){
            vivas_[i][k] = false;
        }
    }
}
int JogoDaVida::linhas() {return nLinhas;}
int JogoDaVida::colunas() {return nColunas;}
bool JogoDaVida::viva(int i, int j){return vivas_[i][j];}
void JogoDaVida::Matar(int i, int j){vivas_[i][j]=false;}
void JogoDaVida::Reviver(int i, int j){vivas_[i][j]=true;}
void JogoDaVida::ExecutarProximaIteracao(){
    struct coordenada{int x, y;};
    coordenada* matar;
    int m=0;
    matar= new coordenada [nLinhas * nColunas];
    coordenada* reviver;
    int r=0;
    reviver= new coordenada [nLinhas * nColunas];
    for(int i=0; i<nLinhas; i++){
        for(int k=0; k<nColunas; k++){
            int aux = NumeroDeVizinhasVivas(i,k);
            if(vivas_[i][k]){
                if(1>=aux || aux>3){
                    matar[m].x = i;
                    matar[m].y = k;
                    m++;}
            }else{
                if(aux==3){
                reviver[r].x = i;
                reviver[r].y =k;
                r++;}
            }
        }
    }
    for(int i=0; i<m; i++)Matar(matar[i].x, matar[i].y);
    for(int i=0; i<r; i++)Reviver(reviver[i].x, reviver[i].y);
    delete [] matar;
    delete [] reviver;
}
JogoDaVida::~JogoDaVida(){
    for(int i=0; i<nLinhas; i++) delete[]vivas_[i];
    delete[] vivas_;
}
int JogoDaVida::NumeroDeVizinhasVivas(int x, int y){
    int c=0;
    for(int i=-1; i<=1; i++){
        for(int k=-1; k<=1; k++){
            if(i==0 && k==0)continue;//faz pular o laco
            if(vivas_[(x+i+nLinhas)%nLinhas][(y+k+nColunas)%nColunas])c++;
        }
    }
    return c;
}
