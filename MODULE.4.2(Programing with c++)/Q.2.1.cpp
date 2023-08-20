/*  
 Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account   
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
			BankAccount(const string& name,int accNumber,const string& type,double initialBalance){
				depositorName=name;
			accountNumber = accNumber;
				accountType=type;
				balance=initialBalance;
			}
			
			void deposit(double amount){
				balance +=amount;
				cout<<"deposit successful.Current balance:"<<balance<<endl;
			}
			
			void withdraw(double amount){
				if(balance>=amount){
					balance-= amount;
					cout<<"Withdrawal successful.Current balance:"<<balance<<endl;
				}else{
					cout<<"Insufficient balance.withdrawal failed."<<endl;
				}
			}
		void displayAccountInfo(){
			cout<<"Account Information"<<endl;
			cout<<"Depositor Name: "<<depositorName<<endl;
			cout<<"Account Number: "<<accountNumber<<endl;
			cout<<"Account Type:"<<accountType<<endl;
			cout<<"Balance: "<<balance <<endl;
		}
		
};
int main(){
	BankAccount account("ahmedraza",900012456,"Savings",23000.0);
	
	account.displayAccountInfo();
	account.deposit(8500.0);
	account.withdraw(5000.0);
	return 0;
}

