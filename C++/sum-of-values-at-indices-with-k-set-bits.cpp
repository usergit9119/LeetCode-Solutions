// Time:  O(n(log(n)))
// Space: O(1)
// bitmasks

class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& a, int k) {

        int ans=0,n=a.size();

        for(int i=0;i<n;i++){
            if(__builtin_popcount(i)==k) ans+=a[i];
        }
        return ans;
    }
};