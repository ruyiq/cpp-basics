class Solution {
public:
    string replaceSpaces(string &str) {
        string n;
        for(int i=0;i<str.size();i++){ // for (auto c : str)
            if(str[i]==' ') n+="%20";
            else n+=str[i];
        }
        return n;
    }
}