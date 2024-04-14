class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> maps2t;
        unordered_map<char,char> mapt2s;
        for(int i=0;i<s.length();i++){
            char charS= s[i];
            char charT= t[i];
            if(maps2t.find(charS) != maps2t.end()){
                if(maps2t[charS] != charT)
                return false;
            }
            else{
                if(mapt2s.find(charT) != mapt2s.end())
                return false;
            }
             
            maps2t[charS] = charT;
            mapt2s[charT] = charS;
         }
         return true;

    }
};