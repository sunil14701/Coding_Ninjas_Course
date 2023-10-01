void update_vector(vector<int> &vec, bool &carry, int sum){
	if(sum>9) carry = 1;
	else carry = 0;
	vec.push_back(sum%10);
}

vector<int> findSum(vector<int> &a, vector<int> &b) {
	vector<int>vec;
	bool carry = 0;
	int sum = 0;
	int i=a.size()-1, j=b.size()-1;
	while(i>=0 or j>=0){
		if(i>=0 and j>=0){
			sum = a[i--] + b[j--] + carry;
			update_vector(vec, carry, sum);
		}
		else if(i<0 and j>=0){
			sum = b[j--] + carry;
			update_vector(vec, carry, sum);
		}
		else if(i>=0 and j<0){
			sum = a[i--] + carry;
			update_vector(vec, carry, sum);
		}
	}
	if(carry) vec.push_back(1);
	reverse(vec.begin(),vec.end());
	return vec;
}