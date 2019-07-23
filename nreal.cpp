double nreal(int x, int y) {

  int c = 0, p = 1, z = y;
  while (z!=0) {
  	c = c + 1;
    z = z/10;
    p=p*10;
  }
  return x+y*1.0/p;
}
