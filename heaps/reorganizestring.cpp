class Solution {
public:
    string reorganizeString(string s) {
        int n=s.length();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++) {
            mp[s[i]]++;
        }
        if(mp.size()==1 && mp[s[0]]>1) return "";
        priority_queue<pair<int,char>> pq;
        for(auto x=mp.begin();x!=mp.end();x++) {
            pq.push({x->second,x->first});
        }
        string res="";
        while(pq.size()>=2) {
            char a=pq.top().second;
            int f1=pq.top().first;
            f1--;
            pq.pop();
            res+=a;
            
            char b=pq.top().second;
            int f2=pq.top().first;
            f2--;
            pq.pop();
            res+=b;
            
            if(f1!=0) {
                pq.push({f1,a});
            }
            if(f2!=0) {
                pq.push({f2,b});
            }
        }
        if(pq.size()==0) return res;
        if(pq.top().second == res[res.length()-1] || pq.top().first >1) 
        {
            return "";
        }
        else {
            return res+pq.top().second;
        }
        
        
    }
};