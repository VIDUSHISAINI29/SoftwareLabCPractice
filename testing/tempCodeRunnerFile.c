int main(){
    float a, b, c;
      scanf("%f %f %f", &a, &b, &c);
    printf("a = %.2f ,b = %.2f, c = %.2f", a, b, c);
    if(a == 0){
        findRoots(a,b,c);
        return 1;
    }else{
        scanf("%f %f %f", &a, &b, &c);
    printf("a = %.2f ,b = %.2f, c = %.2f", a, b, c);
     findRoots(a,b,c);
     
    }
    return 0;
}