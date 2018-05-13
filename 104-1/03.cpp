#include <iostream>
#include <string>

using namespace std;

void Lowercase(string x){
	for(int i=0;i<x.length();i++){
		if((int)x.at(i) < 65 || (int)x.at(i) > 90){
			cout<<x.at(i);
			continue;
		}
		cout<<(char)((int)x.at(i) + 32);
	}
}

int main(){
	string input;
	cout<<"enter a string: ";
	getline(cin, input);
	Lowercase(input);
}
