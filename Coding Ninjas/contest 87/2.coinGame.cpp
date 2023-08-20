int coinGame(int x, int y) {
    
    
    if(x < 3 || y < 1) return 0;
  
    int t = min(y, x/3);
    

    return  (t % 2 != 0) ? 1 : 0;

}
