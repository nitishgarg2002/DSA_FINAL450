class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
                sort(intervals.begin(), intervals.end());
        vector<vector<int>>output;
        int i = 0, j = 1;
        output.push_back(intervals[0]);
        while(j < intervals.size()){
            
            if(output[i][1] >= intervals[j][0] && output[i][1] >= intervals[j][1]){
                j++;
                continue;
            }
            
            if(output[i][1] >= intervals[j][0]){
                output[i][1] = intervals[j][1];
                j++;
            }
            else{
                output.push_back(intervals[j]);
                i++;
                j++;
            }
        }
        return output;
    }
    
};