float produtoescalar(int N, float A[], float B[]){//pescalar= A[0]*B[0]+...+A[N]*B[N]
    float mult[N];
    float pescalar=0;
    int i=0;
    for(i=0; i<N; i++){
        mult[i]=A[i]*B[i];
    }
    for(i=0; i<N; i++){
        pescalar+=mult[i];
    }
    return pescalar;
}