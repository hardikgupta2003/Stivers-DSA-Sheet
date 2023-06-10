bool isPalindrome(string &s)
{
	 string str=s;
	int n=s.length();
	for(int i=0;i<n/2;i++){
		swap(str[i],str[n-i-1]);
	}
	if(s==str){
		return true;
	}
	else{
		return false;
	}
}

//code studio
