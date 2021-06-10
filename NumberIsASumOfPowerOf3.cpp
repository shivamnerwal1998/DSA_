  bool checkPower(int num , int test)
    {
        if( num == 0  ) return true ;
        
        while( num >= test  ){
            if( checkPower( num-test , test*3 ) == true ){
                return true ; 
            }
            test = test * 3 ;
        }
        return false ;
        
        
    }
    bool checkPowersOfThree(int n) {
        int test = 1 ;
        return checkPower( n , test) ; 
        
    }

int main(){
  int num ; 
  cin >> num ; 
  cout << checkPowersOfThree(num) ; 
}
