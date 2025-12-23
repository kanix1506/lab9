#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,interestrate,yearlypay;
	double PrevBalance,Interest,Total,Payment,NewBalance;
	int Year=1;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interestrate;
	cout << "Enter amount you can pay per year: ";
	cin >> yearlypay;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	PrevBalance = loan;

	while (PrevBalance > 0) {
	
	Interest=PrevBalance*(interestrate/100);
	Total=PrevBalance + Interest;

	if(Total<yearlypay){
		Payment = Total;
	}else{
		Payment = yearlypay;
	}

	NewBalance=Total-Payment;
	
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << Year; 
	cout << setw(13) << left << PrevBalance;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << Payment;
	cout << setw(13) << left << NewBalance;
	cout << "\n";

	PrevBalance = NewBalance;
	Year++;
	}
	return 0;
}