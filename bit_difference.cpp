class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    vector<int> give_binary(int n){
        vector<int> v(32,0);
        int q = 0;
        int r = 0;
        int i=0;
        while(n!=0){
            q = n/2;
            r = n%2;
            v[i] = r;
            n =q;
            i++;
        }
        
        reverse(v.begin(), v.end());
        return v;
    }
    
    int countBitsFlip(int a, int b){
        
        // Your logic here
        vector<int> a1 = give_binary(a);
        vector<int> b1 = give_binary(b);
        
        int count = 0;
        for(int i=0; i<32; i++){
            if(a1[i]!=b1[i]){
                count++;
            }
        }
        
        return count;
    }
};
