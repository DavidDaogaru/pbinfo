int oglindit(int a){
  	int o=0;
  	while(a!=0){
    	o=o*10+a%10;
      	a/=10;
    }
  	return o;
}
