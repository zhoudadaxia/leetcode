static const auto _____ = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l1 = 0, l2 = 0, length1 = nums1.size(), length2 = nums2.size();
        vector<int> result;
        while(l1 < length1 || l2 < length2){
            if(l1 >= length1){
                result.push_back(nums2[l2]);
                l2++;
                continue;
            }
            
            if(l2 >= length2){
                result.push_back(nums1[l1]);
                l1++;
                continue;
            }
            
            int n1 = nums1[l1];
            int n2 = nums2[l2];
            if(n1 < n2){
                result.push_back(n1);
                l1++;
            }else{
                result.push_back(n2);
                l2++;
            }
        }
        
        int totalLength = result.size();
        if(totalLength % 2 != 0){
            return result[totalLength / 2];
        }else{
            int n1 = result[totalLength / 2 - 1];
            int n2 = result[totalLength / 2];
            return (n1 + n2) / 2.0;
        }
    }
};
