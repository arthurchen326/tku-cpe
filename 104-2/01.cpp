#include <iostream>

using namespace std;

class DoMath{
	private:
		float real_ans;
	public:
		float n1;
		float n2;
		DoMath(float, float);
		void add();
		void minus();
		void multiply();
		void divide();
		bool check_ans(float);
		float get_real_ans();	
};

DoMath::DoMath(float a, float b):n1(a),n2(b){
}

void DoMath::add(){
	real_ans = n1 + n2;
}

void DoMath::minus(){
	real_ans = n1 - n2;
}

void DoMath::multiply(){
	real_ans = n1 * n2;
}

void DoMath::divide(){
	real_ans = n1 / n2;
}

bool DoMath::check_ans(float x){
	if(x == real_ans)
		return true;
	else
		return false;
}

float DoMath::get_real_ans(){
	return real_ans;
}

int main(){
	int select = 0;
	float n1 = 0 , n2 = 0;
	char operation;
	float student_ans;
	cout<<"Select arithmetic operation:"<<endl;
	cout<<"1. Add"<<endl;
	cout<<"2. Minus"<<endl;
	cout<<"3. Multiply"<<endl;
	cout<<"4. Divide"<<endl;
	cout<<"? ";
	cin>>select;
	while(select == 4){
		cout<<"n1: ";
		cin>>n1;
		cout<<"n2: ";
		cin>>n2;
		if(n2 == 0)
			cout<<"n2 is not allowed to be 0"<<endl;
		else
			break;
	}

	DoMath test(n1, n2);
	
	switch(select){
		case 1:
			operation = '+';
			test.add();
			break;
		case 2:
			operation = '-';
			test.minus();
			break;
		case 3:
			operation = '*';
			test.multiply();
			break;
		case 4:
			operation = '/';
			test.divide();
			break;
	}

	cout<<n1<<operation<<n2<<"=? ";
	cin>>student_ans;
	
	if(test.check_ans(student_ans))
		cout<<"Correct";
	else{
		cout<<"Wrong"<<endl;
		cout<<n1<<operation<<n2<<"="<<test.get_real_ans()<<endl;
	}
}
