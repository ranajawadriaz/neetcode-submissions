class Solution {
public:
    void reverseString(vector<char>& s) {

        for(int i=0,j=s.size()-1;i<s.size()/2;i++,j--)
        {
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;

        }

        // n e e t
        // 0 1 2 3

        // w e r t y
        // 0 1 2 3 4
        
    }
};