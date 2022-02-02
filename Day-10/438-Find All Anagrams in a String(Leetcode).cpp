// t.c-> o(n)  s.c-> o(n)
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int len=p.length();
	    vector<int> v;
	    map<char,int> m;
	    for(int i=0;i<len;i++)
	    {
	        m[p[i]]++;          //storing freq of eacg char in pat in a map
	    }
	    int count=m.size();
	    int i=0,j=0;
	    while(j<s.size())
	    {
	        if(m.find(s[j])!=m.end())
	        {
	            m[s[j]]--;
	            if(m[s[j]]==0) count--;
	        }
	        if((j-i+1)<len) j++;
	        else if((j-i+1)==len)
	        {
	            if(count==0)
                {
                    v.push_back(i);
                }
	            if(m.find(s[i])!=m.end())
	            {
	                m[s[i]]++;
	                if(m[s[i]]==1) count++;
	            }
	           i++;
	           j++;
	        }
        }
        return v;
    }
};