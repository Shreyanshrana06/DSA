class Solution {
public:
    string removeOccurrences(string s, string part) {
        if(s.find(part) == string::npos){
            return s;
        }
        int pos = s.find(part);
        s.erase(pos,part.length());
        return removeOccurrences(s,part);
    }
};