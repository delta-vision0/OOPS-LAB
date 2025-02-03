#include <iostream>
#include <string.h>
using namespace std;
class Bank{
	private:
		string BankName;
		string username;
		long long int accountNumber;
		string IFSCcode;
		float Balance;
	public:
		Bank()
		{	cout << "Constructor Called \n" << endl;
			BankName="Bank Of Maharashtra";
			username = "Navanath";
			accountNumber = 242933539335;
			IFSCcode = "MAHB0000085";
			Balance=520;
			
		}
		void setDeposit(){
			int amount;
			cout << "Enter Amount To Deposit" << endl;
			cin >> amount ;
			Balance = Balance+amount;
			cout << amount << " Rupees deposited sucessfully\n" << endl;
		}
		void getAccountInfo(){
			cout << "Bank Name : " << BankName <<endl;
			cout << "Username : " << username << endl;
			cout << "Account Number: " << accountNumber << endl;
			cout << "IFSC Code : " << IFSCcode <<endl;
			cout << "Balance :" << Balance <<" INR\n" <<endl;
		}
		void setWithdrawl(int amount){
			Balance = Balance-amount;
		}
		~Bank(){
			cout << "Destructor is Called " <<endl;
		}
		Bank(const Bank &obj)
		{
			cout << "copy constructor is called \n" <<endl;
			BankName=obj.BankName;
			username = obj.username;
			accountNumber = obj.accountNumber;
			IFSCcode = obj.IFSCcode;
			Balance=obj.Balance;
		}
};
int main(){
	Bank B1;
	int choice;
	B1.getAccountInfo();
	//B1.setDeposit();
	//B1.getAccountInfo();
	Bank B2 = B1;
	B2.getAccountInfo();
	B2.setDeposit();
	B2.getAccountInfo();
}
