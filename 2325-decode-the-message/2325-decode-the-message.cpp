class Solution {
public:
    string decodeMessage(string key, string msg) {
        map<char,char> mp;
        char c='a' ;
        
        for(int i=0 ; i< key.size();i++)
         { 
            if (key[i]!=' ' && mp.find(key[i])== mp.end()) mp[key[i]]=c++ ;
             if(mp.size()==26) break;
        }
        
        for(int i=0 ; i<msg.size(); i++)
        {   if(mp.find(msg[i])!=mp.end()) msg[i]=mp[msg[i]] ;
        }
        return msg ;
    }
};