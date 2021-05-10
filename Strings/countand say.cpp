class Solution {
public:
    string say(string s) {
        int ptr=0;
        string sayNum="";
        while(ptr<s.length()) {
            char temp = s[ptr];
            int times=1;
            int i;
            for( i=ptr+1;i<s.length();i++){
                if(s[i]!=temp){
                    break;
                }
                times++;
            }
            ptr=i;
             sayNum += to_string(times)+temp;
            
        }
        return sayNum;
    }
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        string temp="1";
        while(n!=1) {
            
            string ss = say(temp);
            temp = ss;
            n--;
        }
        return temp;
        
    }
};