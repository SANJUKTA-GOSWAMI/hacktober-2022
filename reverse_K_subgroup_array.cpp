class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        
        int i=0;
        
        while(i<n){
            
            int start = i;
            int j  =  i+k-1<n ? i+k-1 : n-1;
            
            while(j>i){
                
                arr[i] = arr[i]+arr[j];
                arr[j] = arr[i]-arr[j];
                arr[i] = arr[i]-arr[j];
                i++;
                j--;
            }
            
            i = start+k;
            
        }
        
    }
};
