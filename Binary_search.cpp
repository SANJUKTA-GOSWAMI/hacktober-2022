int binarysearch(int arr[], int n, int k){
        // code here
        int l = 0;
        int r = n-1;
        int mid;
        int x = -1;
        while(l<=r){
            mid = (l+r)/2;
            if(arr[mid]==k){
                x = mid;
                break;
            }
            
            else if(arr[mid]<k){
                l = mid+1;
            }
            
            else if(arr[mid]>k){
                r = mid-1;
            }
        }
        return x;
    }
