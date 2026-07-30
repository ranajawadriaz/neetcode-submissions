class Solution {
public:
    int scoreOfString(string s) {

        int str=0;
        if(s.length()>1)
        {
            for(int i=0;i<s.length()-1;i++)
            {
                str+=abs(int(s[i+1])-int(s[i]));

            }

        }

        return str;
        
        
    }
};