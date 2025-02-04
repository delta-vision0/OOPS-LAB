#include <iostream>
#include <string.h>
using namespace std;
class Bank{
	private:
		string accountHolder;
		long long int accountNumber;
		string accountType;
		double Balance;
	public:
		Bank()
		{	cout << "Default Constructor Called \n" << endl;
			accountHolder = "Navanath Bhosale";
			accountNumber = 242933539335;
			accountType = "Savings";
			Balance=500;
		}
		Bank(string username,long long int A_number,string type,double bal)
		{	cout << "\nParameter Constructor Called \n" << endl;
			accountHolder = username;
			accountNumber = A_number;
			accountType = type;
			Balance=bal;
		}
		
		void getAccountHolder(){
		    cout << "Holder : " << accountHolder <<endl ;
		}
		
		void getAccountNumber(){
		    cout << "Account Number : " << accountNumber<<endl ;
		}
		void getAccountType(){
		    cout << "Type : " << accountType<<endl ;
		}
		void getBalance(){
		    cout << "Balance : " << Balance<<endl ;
		}
		void deposit(double amount) {
			Balance = Balance+amount;
			cout << "\ndepositing " <<amount<<"..."<< endl;
			cout << "New Balance : " <<Balance<<"..."<< endl;
		}
		void setAccountType(string newType){
		    accountType = newType;
		    cout <<"\nUpdated Account Type to "<<newType<<endl;
		}
    	void withdraw(double amount) {
    			Balance = Balance-amount;
    			cout << "\nWithdrawing " <<amount<<"..."<< endl;
    			cout << "New Balance : " <<Balance<<"..."<< endl;
    		}
    	void displayAccountDetails(){
    	    cout << "\nFinal Account Details: " << Balance<<endl ;
    	    cout << "Holder : " << accountHolder <<endl ;
    	    cout << "Account Number : " << accountNumber<<endl ;
    	    cout << "Type : " << accountType<<endl ;
    	    cout << "Balance : " << Balance<<endl ;
    	}
		~Bank(){
			cout << "Destructor is Called " <<endl;
		}
};
int main(){
	Bank B1;
    cout<< "Account Details:"<<endl;
    B1.getAccountHolder();
    B1.getAccountNumber();
    B1.getAccountType();
    B1.getBalance();
    B1.deposit(5000);
    B1.withdraw(2000);
    B1.setAccountType("Current");
    B1.displayAccountDetails();
    
    Bank B2("Digvijay Devkar",749918187677,"current",1000);
    cout<< "Account Details:"<<endl;
    B2.getAccountHolder();
    B2.getAccountNumber();
    B2.getAccountType();
    B2.getBalance();
    B2.deposit(3000);
    B2.withdraw(1000);
    B2.setAccountType("Savings");
    B2.displayAccountDetails();
    
}
