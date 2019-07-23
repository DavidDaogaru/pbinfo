void valuri(int n, int v[]){
    int i;
    v[0]=1;
    v[2*n-1]=2;
    for(i=0;i<=2*n-4;i=i+2)
        v[i+2]=v[i]+2;
    for(i=2*n-1;i>=3;i=i-2)
        v[i-2]=v[i]+2;
}
