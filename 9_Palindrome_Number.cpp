class Solution {
    public:
        bool isPalindrome(int x) {
    
            int temp = x;
            long answer =0;
            while(temp > 0)
            {
    
                int digit = temp % 10;
                answer = answer * 10 + digit;
                temp = temp / 10 ;
            }
             if(answer == x)
                {
                    return true;
                }
                else 
            return false;
        }
    };