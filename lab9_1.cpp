#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double principal, interestRate, annualPayment, interest, total, newBalance;
    int year = 1;
    
	cout << "Enter initial loan: ";
	cin >> principal;
	cout << "Enter interest rate per year (%): ";
	cin >> interestRate;
	cout << "Enter amount you can pay per year: ";
	cin >> annualPayment;
	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	

while (principal > 0) {
       interest = principal * (interestRate / 100);
        total = principal + interest;

     
        double payment = (total < annualPayment) ? total : annualPayment;
        newBalance = total - payment;

	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left <<principal;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	cout << setw(13) << left << payment;
	cout << setw(13) << left << newBalance;
	cout << "\n";	
	

        principal = newBalance;

        if (principal <= 0) break;
        
    year++;
    
    }
    	return 0;
}