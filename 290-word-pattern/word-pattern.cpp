class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string word;
        
        // 1. Extract all words from the string
        while (ss >> word) {
            words.push_back(word);
        }

        // 2. If counts don't match, it's impossible
        if (pattern.size() != words.size()) return false;

        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;

        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string w = words[i];

            // 3. Check if char 'c' is already used by a different word
            if (charToWord.count(c) && charToWord[c] != w) return false;
            
            // 4. Check if word 'w' is already used by a different char
            if (wordToChar.count(w) && wordToChar[w] != c) return false;

            charToWord[c] = w;
            wordToChar[w] = c;
        }

        return true;
    }
};