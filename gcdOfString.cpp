class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1.length()>str2.length())
            swap(str1,str2);
        for(int l=str1.size();l>0;l--){
            if(str1.size()%l!=0)
                continue;
            if(str2.size()%l!=0)
                continue;
            
            string s=str1.substr(0,l);
            int flag=1;
            for(int i=0;i<str1.size();i+=l){
                if(str1.substr(i,l)!=s){
                    flag=0;
                    break;
                }
            }
            if (!flag) continue;
            for(int i=0;i<str2.size();i+=l){
                if(str2.substr(i,l)!=s){
                    flag=0;
                    break;
                }
            }
            if (!flag) continue;
            
            return s;
        }
        return("");
    }
};
