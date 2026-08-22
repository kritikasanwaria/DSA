class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0 ;
        int j = 0 ;

        while (j < t.length()){
            if (s[i] == t[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return i == s.length();     //"Did I successfully find ALL the characters of s?" 
                                    // if s="abc" , t="abdcgh"    so we go thru t: a → b → c (Every character of s was found)
                                    // After finding c: i = 3 , so now its equal to length of s : therfore i==s.length
    }
};