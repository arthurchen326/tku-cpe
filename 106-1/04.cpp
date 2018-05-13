#include <iostream>
#include <string>

using namespace std;

class Account{
	private:
		int money;
	public:
		string bank_name;
		Account(string,int);
		void deposit(int);
		void withdraw(int);
		int getBalance();
};

Account::Account(string a, int b):bank_name(a),money(b){
}

void Account::deposit(int x){
	money+=x;
}

void Account::withdraw(int x){
	money-=x;
}

int Account::getBalance(){
	return money;
}

int main(){
	int initial = 1000;
	int moneyin = 3000;
	int moneyout = 2000;
	cout<<"Open a new account and deposit 1000 dollars"<<endl;
	Account account("123456789", initial);
	account.deposit(moneyin);
	cout<<"Deposit "<<moneyin<<" dollars"<<endl;
	cout<<"Balance = "<<account.getBalance()<<endl;
	account.withdraw(moneyout);
	cout<<"Withdraw "<<moneyout<<" dollars"<<endl;
	cout<<"Balance = "<<account.getBalance()<<endl;
}
