class Solution {
public:

   
    bool isPalindrome(int x) {
        int num=x;
      if(x<0){
             return false;
         }
       else{
           unsigned int reverse=0;
        while(x!=0){
            int digit=x%10;
            
            reverse=reverse*10+digit;
            x=x/10;
        }
        if(num==reverse){
            return true;
        }
        else{
            return false;
        }
       } 
    }
};



// leet code problem
