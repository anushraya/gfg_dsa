class Solution{
  public:
   int findFloor(vector<long long> v, long long n, long long x){
        int ans=-1;
        int i=0;
        int j=n-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(v[mid]==x){
                return mid;
            }
            else if(v[mid]>x){
                j=mid-1;
            }
            else{
                i=mid+1; 
                ans=i-1;
            }
        }
        return ans;
    }
};
