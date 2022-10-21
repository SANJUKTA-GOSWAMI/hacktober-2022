class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	// Your code here
    	int mask_odd = 0x55555555;
    	int mask_even = 0xAAAAAAAA;
    	
    	int odd_only = (n&mask_odd);
    	int even_only = (n&mask_even);
    	
    	odd_only = (odd_only<<1);
    	even_only = (even_only>>1);
    	int result = (odd_only|even_only);
    	return result;
    }
};
