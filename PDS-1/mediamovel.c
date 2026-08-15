void mediaMovel(int N, float v[N], int k, float m[N-k+1]){
    for(int i=0; i<(N-k+1); i++){
        m[i]=0;
        int j=i;
        for(j; j<(k+i);j++){
            m[i]+=v[j];
        }
        m[i]/=k;
    }
    /*float somaAtual = 0;
    
    // 1. Calcula a soma APENAS da primeiríssima janela "na unha"
    for(int i = 0; i < k; i++){
        somaAtual += v[i];
    }
    m[0] = somaAtual / k;
    
    // 2. Agora a janela só escorrega usando matemática básica (sem laço duplo!)
    for(int i = 1; i < (N - k + 1); i++){
        // O cara que sai fica 'k' posições para trás. O cara que entra é o 'i + k - 1'.
        somaAtual = somaAtual - v[i - 1] + v[i + k - 1];
        
        m[i] = somaAtual / k;
    }*/
}
