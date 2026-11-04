#include <iostream>
#include <sstream>

using std::stringstream;
using std::endl;
using std::cout;

int main(){
    stringstream ss;//uma string q funciona como um cout, mas n e exatamente uma string 
    int x = 67;
    float y= 3.7;
    bool z= false;
    ss << "meu penis tem " << x << " cm" << " e " << y << " fds sla" << z << endl;
    cout << ss.str();//transforma ss em string
    ss.str("");//ss.str("texto") substitui oq esta na estring pelo texto
    ss.clear();//Reseta o estado interno do fluxo (limpa eventuais erros de formatação)
    ss<< "penis" << endl;
    cout << ss.str();
return 0;
}