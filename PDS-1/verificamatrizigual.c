int verificamatrizigual( int ax, int ay, int a[ax][ay], int bx, int by, int b[bx][by]){
    if(ax!=bx || ay!=by){
        return 0;
    }
    for(int i=0; i<ax; i++){//le as linhas=i
        for(int k=0; k<ay; k++){//le as colunas=k
            if(a[i][k]!=b[i][k]){
                return 0;
            }
        }
    }
return 1;
}