class Solution {
public:
 
    bool isVowel(char ch)
    {
        if(32&ch)
            ch^=32;
 
        if(ch=='A' or ch=='E' or ch=='I' or ch=='O' or ch=='U')
            return true;
 
        return false;
    }
 
    bool halvesAreAlike(string s)
    {
        int left=0;
        int right=0;
        int n = s.length();
 
        for(int i=0;i<n/2;i++)
        {
            if(isVowel(s[i]))
                left++;
        }
 
        for(int i=n/2;i<n;i++)
        {
            if(isVowel(s[i]))
                right++;
        }
 
        return left==right;
    }
};
