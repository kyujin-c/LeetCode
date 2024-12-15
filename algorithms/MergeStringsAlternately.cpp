/* 
Description:

You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.
*/
    

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word;
        int word1_len = word1.size();
        int word2_len = word2.size();
        int i = 0;
        
        while (i < word1_len || i < word2_len) {
            if (i < word1_len) {
                word += word1[i];
            }
            
            if (i < word2_len) {
                word += word2[i];
            }
            
            i++;
        }
        return word;
    }
};
