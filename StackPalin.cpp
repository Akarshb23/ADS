#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N ; 
	cin >> N ;
	string s = to_string(N);
	string d = "" ;
	stack<char> st ;
	for(char c : s){
	    st.push(c);
	}
	while(!st.empty()){
	    d += st.top();
	    st.pop();
	}
	bool flag = true ;
	for(int i = 0 ; i<s.size() ; i++){
	    if(tolower(s[i]) != tolower(d[i])) flag = false;
	}
	if(flag) cout << "Palindrome" << endl ;
	else cout << "Not Palindrome" << endl ;

}
