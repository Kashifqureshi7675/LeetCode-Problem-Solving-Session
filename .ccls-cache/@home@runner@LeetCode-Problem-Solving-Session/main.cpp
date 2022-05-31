#include <iostream>

class Solution{
/*
Q1: Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2(pow31) 2(pow31) - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned). 

.......CODE........

public:
    int reverse(int x) {

      int ans = 0;
      while(x != 0) {
        
        int digit = x % 10;

        
        if( (ans > INT_MAX/10) || (ans < INT_MIN/10)) {
          return 0;
        }

        
        ans = (ans * 10) + digit;
        x = x / 10;
      }
      return ans;
      
    }

*/



/* 
Q2: The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.

----------CODE----------


public:
  int bitwiseComplement(int n) {
    int m = n;
    int mask = 0;

    // Edge Case
    if(n == 0)
      return 1;
    

    while( m!= 0) {
      mask =  (mask << 1) | 1;
      m = m >> 1;  
    }

    int ans = (~n) & mask;
    return ans;
  } 

*/

/*

Q:3 Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

*/

public:
   public: 
    bool isPowerOfTwo(int n) {
        
      for(int i = 0;  i <= 30; i++) {
          
        int ans = pow(2, i);

        if(ans == n) {
          return true;
        }
      }
      return false;
      
    }


};