void sub(int n, int v[],int x){
    int k=n-1,i;
    for(i=n-1;i>=0;i--){
        if(v[i]!=x){
            v[k]=v[i];
            k--;
        }
    }
    for(i=k;i>=0;i--)
        v[i]=x;
    
}
