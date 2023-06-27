#include<iostream>
using namespace std;
void replacepi(string s){
	
	if(s.length()==0){	//Base case
		return;
	}
	
	if(s[0]=='p' && s[1]=='i' || s[0]=='P' && s[1]=='i'){		//replacing and recursion
		cout<<"3.14";
		replacepi(s.substr(2));
	}
	else{
		cout<<s[0];
		replacepi(s.substr(1));
	}
}

int main(){
	string s;
	cout<<"Enter the String:";
	cin>>s;
	replacepi(s);
	return 0;
}
