void divisao(int* end_var1, int* end_var2){
    int temp;
    temp= *end_var1/ *end_var2;
    *end_var2= *end_var1% *end_var2;
    *end_var1=temp;
}