int print2largest(int arr[], int n) {
	    int max = -1, sec_max = -1;
	    for(int i=0;i<n;i++){
	       // cout <<i-1<<" "<< max << " " << sec_max << endl;
	        int curr = arr[i];
	       if(curr > max){
	           sec_max = max;
	           max = curr;
	       }
	       else if(curr != max and sec_max < curr){
	           sec_max = curr;
	       }
	    }
	    return sec_max;
	}