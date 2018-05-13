#include <iostream>

using namespace std;

class A{
	private:
		int x;
		int y;
	public:
		A(int,int);
		int Sum();
};

A::A(int a, int b){
	x=a;
	y=b;
}

int A::Sum(){
	return x+y;
}

int main(){
	int a, b, total;
	cin>>a>>b;
	A objA(a,b);
	total = objA.Sum();
	cout<<a<<" + "<<b<<" = "<<total;
}
