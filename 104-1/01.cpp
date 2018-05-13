#include <iostream>

using namespace std;

void converter(int x){
	int inches = (float)x/2.54 + 0.5;
	int converted_inches = inches % 12;
	int foot = inches / 12;

	cout<<foot<<" feet "<<converted_inches<<" inches ";
}

int main(){
	int height;
	cout<<"cm: ";
	cin>>height;
	converter(height);
}
