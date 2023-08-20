int stringCount(int n, string &s) {
	int cnt = 0;
	string str = "";
	for(int i=0; i<n-1; i++){
		str = s.substr(i, 2);
		if(str == "*#" || str == "#*"){
			 cnt+=1;
		}
		str = "";
	}
	return cnt;
}