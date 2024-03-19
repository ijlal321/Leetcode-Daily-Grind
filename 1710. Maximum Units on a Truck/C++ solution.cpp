class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b){
        return a[1] > b[1];
    }


    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), cmp);
        int n = boxTypes.size();
        for(int i=0; i<n; i++){
            cout<<boxTypes[i][0]<<" "<<boxTypes[i][1]<<endl;
        }
        int count = 0, ans = 0, k = truckSize;
        for(int i=0; i<n; i++){
            if(k > 0){
                int temp = boxTypes[i][0];
                while(temp != 0 && k > 0){
                    ans += boxTypes[i][1];
                    temp--;
                    k--;
                }
                
            }
        }

        return ans;
    }
};