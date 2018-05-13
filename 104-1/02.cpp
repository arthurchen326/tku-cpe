#include <iostream>

using namespace std;

int main(){
	int input, sum = 0;
	cout<<"Enter a serise of integers (enter -111 to break):"<<endl;
	while(cin>>input && input != -111){
		if(input % 2 != 0)
			sum+=input;
	}
	cout<<"Sum of odd numbers = "<<sum;
}
