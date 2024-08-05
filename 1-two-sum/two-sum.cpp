class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        vector<int> res;
        for(auto i=0; i<v.size(); i++){
            int key=target-v[i];
             vector<int> :: iterator it=std :: find(v.begin(),v.end(),key);
            if(it!=v.end() && it-v.begin()!=i ){
            res.push_back(i);
            res.push_back(it-v.begin());
            break;
        }
        }
        return res;
    }
};