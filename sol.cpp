class Solution {
    public:
        int addDigits(int num) {
         // brute force solution
           if(num<10) return num;
    
          int curr = 0;
        
    
          while(num>=10){
               int curr = 0;
             
            while(num > 0){
              curr += num%10;
              num /= 10;
    
            }
    
            num = curr;
            
    
    
          }
           
        return num;
    
    
        }
    };