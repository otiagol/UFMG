float arredonda(float num){
    int inum= (int)num;
    if(num>=0){
        if(num-inum<0.5){
        return(inum*1.0);
    }else{
        return(inum+1*1.0);
    }
    }else{ 
        num= num * -1;
        inum= inum * -1;
         if(num-inum<0.5){
        return(inum*-1.0);
    }else{
        return(inum+1)*(-1.0);
    }      
    }
}