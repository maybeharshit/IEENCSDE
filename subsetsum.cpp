class Solution {
  public:
    void func(int i,int sum, vector<int> &arr, int N, vector<int> &ss){
        if(i == N){
            ss.push_back(sum);
            return;
        }
        
        func(i+1,sum + arr[i], arr, N, ss);
        func(i+1,sum, arr, N, ss);
    }
    vector<int> subsetSums(vector<int>& arr) {
        vector<int> ss;
        func(0,0,arr,arr.size(),ss);
        return ss;
    }
};
