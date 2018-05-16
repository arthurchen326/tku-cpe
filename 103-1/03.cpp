#include <iostream>

using namespace std;

void Move(int n, char peg1, char peg2, char peg3){
	if(n == 0)
		return;
	Move(n-1, peg1, peg3, peg2);
	cout<<peg1<<" -> "<<peg3<<endl;
	Move(n-1, peg2, peg1, peg3);
}

int main(){
	int input;
	cout<<"enter the number of disks: ";
	cin>>input;
	Move(input,'A','B','C');
}
