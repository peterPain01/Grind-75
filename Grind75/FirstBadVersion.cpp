// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int l,r; 
        l = 0; 
        r = n; 
        long long int mid; 
        while(l<=r){
            mid = (l + r) / 2;
            if(isBadVersion(mid) == true){ 
                if(isBadVersion(mid-1) == false)
                    return mid; 
                r = mid - 1;
            }
            else{
                l = mid + 1; 
            }
        }
        return mid; 
    }
};