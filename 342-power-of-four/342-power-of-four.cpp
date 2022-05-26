class Solution {
public:
   
    bool isPowerOfFour(int num) {
        if(num<=0)return false;
        for(int i=0;i<32;i+=2)if(num==1<<i)return true;
        return false;
    }
};
    // return num > 0 && (num & (num - 1)) == 0 && (num - 1) % 3 == 0;
  