class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = 0;
        for(int i = s.length() - 1; i >= 0; i--){
            if(s[i] == ' ') {
                if(n > 0) break;
                continue;
            }
            else{
                n++;
            }
            
        }

        return n;
        
    }
};