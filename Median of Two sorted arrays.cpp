#define pub push_back
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int m=nums1.size();
        int n=nums2.size();
      vector<int> v3;
      for(int i=0;i<m;i++)
      {
          v3.pub(nums1[i]);
      }
      for(int i=0;i<n;i++)
      {
          v3.pub(nums2[i]);
      }  
      sort(v3.begin(),v3.end());
      if(m+n==1)
      {
          return v3[0]+0.0;
      }
      else if((m+n)%2!=0)
      {
          return v3[(m+n)/2]+0.0;
      }
      else
      {
           if((v3[(m+n)/2]+v3[(m+n)/2-1])%2==0) return (v3[(m+n)/2]+v3[(m+n)/2-1])/2+0.0;
           else return (v3[(m+n)/2]+v3[(m+n)/2-1])/2+ 0.5;
      }
    }
};
