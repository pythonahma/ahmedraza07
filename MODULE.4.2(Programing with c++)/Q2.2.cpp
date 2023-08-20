/*
2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/

#include<iostream>
#include<string>
using namespace std;
class BankAccount{
	private:
		string depositorName;
		int accountNumber;
		string accountType;
		double balance;
		
	public:
		BankAccount(const string&name, int accNumber,const string& type,double initialBalance){
			depositorName =name;
			accountNumber=accNumber;
			accountType=type;
			balance=initialBalance;	
		}
		
		void deposit(double amount){
			balance +=amount;
		cout<<"Deposit successful.Current balance:"<<balance<<endl;	
		}
		
		void withdraw(double amount){
			if(balance>=amount){
				balance -=amount;
				cout<<"Withdraw successful.Current balance:"<<balance<<endl;
			} else{
				cout<<"Insufficient balance. Withdraw failed."<<endl;
			}
		}
		
		void displayAccountInfo(){
			cout<<"Account Information"<<endl;
			cout<<"Depositor Name: "<<depositorName<<endl;
			cout<<"Account Number: "<<accountNumber<<endl;
			cout<<"Account Type: "<<accountType<<endl;
			cout<<"Balance:"<<balance<<endl;
		}
};

int main(){
	BankAccount account("ovesh ",900234879,"Savings",20000.0);
		
		account.displayAccountInfo();
		account.deposit(5000.0);
		account.withdraw(10000.0);
		return 0;
}

