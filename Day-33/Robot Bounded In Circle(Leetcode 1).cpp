class Solution {
public:
    bool isRobotBounded(string s) {
        int i = 0, j = 0, times = 1000;
        
        bool u = true, d = false, r = false, l = false;
        int n = s.size();
        while(times--) {
            for(int idx=0; idx<n; idx++) {
                if(s[idx] == 'G') {
                    if(u) {
                        j += 1;
                    }
                    else if(d) {
                        j -= 1;
                    }
                    else if(r) {
                        i += 1;
                    }
                    else {
                        i -= 1;
                    }
                }
                if(s[idx] == 'L') {
                    if(u) {
                        u = false, l = true;
                    }
                    else if(l) {
                        l = false, d = true;
                    }
                    else if(d) {
                        d = false, r = true;
                    }
                    else if(r) {
                        r = false, u = true;
                    }
                }
                if(s[idx] == 'R') {
                    if(u) {
                        u = false, r = true;
                    }
                    else if(l) {
                        l = false, u = true;
                    }
                    else if(d) {
                        d = false, l = true;
                    }
                    else if(r) {
                        r = false, d = true;
                    }
                }
            }
            if(i == 0 && j == 0) {
                return true;
            }
        }
        
        return false;
    }

};