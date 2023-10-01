 void rotateArr(int arr[], int d, int n){
        while(d>=n) d-=n;
        reverse(arr,arr+n);
        reverse(arr,arr+(n-d));
        reverse(arr+(n-d),arr+n);
    }