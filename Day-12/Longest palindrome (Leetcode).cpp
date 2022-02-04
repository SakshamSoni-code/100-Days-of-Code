/* 
I have counted how many times a character has occured even times
And if that cnt is not equals to string size then I will add +1

lets take an example:
 dcaabbcd
 a-2 b-2 c-2 d-2     For this we can generate palindrome of string size only 2+2+2+2
 abcddcba
 
 
 addcdca
 a-2 c-2 d-3   For this apart from chars which are even in numbers we can have one extra char in our palindrome
 acdddca
 
 
 ababcbbcac
 a-3   b-4  c-3   Here we can build our palindrome as by taking 4 b's + (3-1)a's + (3-1)c's + 1 extra char =4+2+2 + 1
 bbacacabb




*/



class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> mp;
        
        for(auto i : s){
            mp[i]++;
        }
        int cnt=0;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if(i->second>=2){
                cnt+=i->second;
                if(i->second % 2!=0){
                    cnt-=1;
                }
            }
        }
        if(cnt==s.size()) return cnt;
        else return cnt+1;
    }
};