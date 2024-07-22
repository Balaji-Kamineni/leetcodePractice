class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = heights.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(heights[j]>heights[i]){
                    string temp = names[i];
                    names[i]=names[j];
                    names[j]=temp;
                    int tem = heights[i];
                    heights[i] = heights[j];
                    heights[j] = tem;
                }
            }
        }
        return names;
    }
};