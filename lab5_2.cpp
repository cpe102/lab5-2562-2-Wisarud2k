#include<iostream>
#include<string>
using namespace std;

string mixText(string s1,string s2){
	int l=s1.size();
	int o=s2.size();
	int n=l+o;
	int i=0,j=0,k=0;
	string mix="";
	if(l == o){
		while(i<l){
			mix=mix+s1[i]+s2[i];
			i++;
		}
		return mix;
	}else{
		return "E";
	}

}


int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
