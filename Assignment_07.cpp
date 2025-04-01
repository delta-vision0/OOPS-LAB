#include <iostream>
#include <string>
using namespace std;

class BankAccount{
	private:
		string ownername;
		double balance;
	public:
		BankAccount(){
			ownername="Rahul Sharma";
			balance=5000;
			cout<<"Creating Account for Rahul Sharma with Initial Deposit : Rs."<<balance<<endl;
		}
		
		BankAccount(string owner, int bal){
			ownername=owner;
			balance=bal;
		}
		
		void deposit(double amount){
			if(amount>0)
			{
				balance=balance+amount;
				cout<<"Depositing Rs."<<amount<<" into "<<ownername<<"'s Account"<<endl;
			}
			else
				cout<<"The Amount Should Not be Negative/Zero"<<endl;
		}
		
		void withdraw(double amount){
			if(amount<balance)
			{
				balance=balance-amount;
				cout<<"Withdrawing Rs."<<amount<<" From "<<ownername<<"'s Account"<<endl;
			}
			else{
				cout<<"Insufficient Funds"<<endl;
			}
		}
		
		void transfer(BankAccount &to, double amount){
			if(amount<balance){
				balance=balance-amount;
				to.balance=to.balance+amount;
				cout<<"Transferring Rs."<<amount<<" from "<<ownername<<" to "<<to.ownername<<endl;
				cout<<"New Balance of "<<ownername<<" :Rs."<<balance<<endl;
				cout<<"New Balance of "<<to.ownername<<" :Rs."<<to.balance<<endl;
			}
			else{
				cout<<"Insufficient Funds"<<endl;
			}
		}
		
		 void divideBalance(double divisor){
		 	if(divisor>0){
		 		cout<<"Divide Balance by "<<divisor<<endl;
		 		balance=balance/divisor;
			 }
			else{
				cout<<"Can't Divide By 0"<<endl;
			}
		 }
};
int main(){
	BankAccount B1;
	BankAccount B2("Priya Verma",3000);
	B1.deposit(1000);
	B1.withdraw(7000);
	B1.transfer(B2,2000);
	B1.divideBalance(0);
}
