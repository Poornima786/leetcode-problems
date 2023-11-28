class Solution {
    public int maxCoins(int[] piles) {
    Arrays.sort(piles);
      int j =0;
      int len=piles.length;
      int coins =0;
      for(int i =len -2;i>0;i-=2){
          coins+=piles[i];
          if(++j==len/3){
              return coins;
          }
      } 
      return coins; 
    }
}    
