class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int meh=0;int msf=INT_MIN;
        int n=a.size();
        for(int i=0;i<n;i++){
            meh=meh+a[i];
            if(meh<a[i]){meh=a[i];}
            if(msf<meh){
                msf=meh;
            }
        }
        return msf;
    }
};
