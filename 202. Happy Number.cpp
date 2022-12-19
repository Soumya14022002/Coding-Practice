class Solution {
public:

 int squareno(int n) {
        int sum = 0;
        while(n) {
            sum += (int)(pow(n%10, 2));
            n /= 10;
        }
        
        return sum;
    }

    bool isHappy(int n) 
    {
       while(n)
       {
           n=squareno(n);
           if(n==1)
           {
               return true;
           }
           if(n%10==5)
           {
               return false;
           }
       } 
       return false;
    }
};

