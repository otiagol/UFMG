
unsigned int contacarateresalfa(char A[],unsigned int n){
    // letras maiusculas: 65 a 90 - minusculas: 97 a 122 numeros: 48 a 57
    unsigned int c=0;
    for(int i=0; i<n; i++){
        if( (A[i]>= 65 && A[i]<=90) || (A[i]>=97 && A[i]<=122) || (A[i]>=48 && A[i]<=57)){// poderia ter colocado apenas os caracteres que o computador saberia 
            c++;
        }
    }
return c;
}