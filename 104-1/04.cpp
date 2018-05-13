#include <iostream>

using namespace std;

void binary(int n){
	if(n == 0)
		return;
	binary(n/2);
	if(n%2 != 0)
		cout<<1;
	else
		cout<<0;
}

int main(){
	int input;
	cout<<"positive integer: ";
	cin>>input;
	binary(input);
}
