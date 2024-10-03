class Solution {
public:
    bool isPalindrome(int x) {
        long reverseNum=0;
        int temp=x;
        while(temp>0)
        {
            int rem=temp%10;
            reverseNum=reverseNum*10+rem;
            temp=temp/10;
        }
        if(x==reverseNum) return true;
        return false;
    }
};