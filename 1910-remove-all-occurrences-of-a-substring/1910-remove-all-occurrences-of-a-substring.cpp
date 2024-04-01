class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length() != 0 && s.find(part)<s.length()){
            // s.erase(position, count) ye use kiya hai
            // s.find(part)   returns the position (index) of the   first                   occurrence of part
            s.erase(s.find(part),part.length());
        }
        return s;

    }

};