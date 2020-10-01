class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> string_map;
        for (auto it = strs.begin(); it != strs.end(); it++)
        {
            string str = *it;
            sort(str.begin(), str.end());
            if (string_map.find(str) == string_map.end())
            {
                vector<string> vect;
                string_map.insert({str, vect});
            }
            string_map[str].push_back(*it);
        }
        
        vector<vector<string>> results;
        for (auto it = string_map.begin(); it != string_map.end(); it++)
        {
            results.push_back(it->second);
        }
        return results;
    }
};