float raiz(float x){
    //x=y*y - |y^2-x|=0.0001 -> yy=x-0.0001 e yy=x+0.0001 
    float y=1;
    float yy;
    if(x<0){
        printf("raiz se encontra no imaginario\n");
        return 0;
    }
    while(1){
       if(yy<x-0.0001){
        y= y*1.0001;
       }else if(y>x-0.0001){
        y= y*0.9999;
       }else{
        return 1; // sobra o <= e >=
       }
    }
}