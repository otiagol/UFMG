#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
  string plv="";
  string vogais="aeiou";
  int tam=0, i=0, k=0, conta=0;
  cin>> plv;
  tam= plv.size();
  for(i=0; i<5; i++){
    for(k=0; k<tam; k++){
      if(plv[k]==vogais[i]){
        conta++;
      }
    }
    if(conta){
      cout<< vogais[i]<< " " << conta << endl;
      conta=0;
    }
  }
return 0;
}