class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        for (int i = 0; i < s.size(); i ++)
        {
            unordered_set<char> visited_characters;
            int counter = 0;
            for (int j = i; j < s.size(); j++)
            {
                char c = s[j];
                if (visited_characters.find(c) == visited_characters.end())
                {
                    visited_characters.emplace(c);
                    counter++;
                }
                else
                {
                    break;
                }
            }
            
            if (counter > max)
            {
                max = counter;
            }
        }
        
        return max;
    }
};