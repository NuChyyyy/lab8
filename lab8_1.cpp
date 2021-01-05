#include<iostream>
#include<iomanip>

using namespace std;

int main(){	
	double loan,rate,pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	double newb = loan;
	for(int i = 1; i > 0; i++)
	{
		double inter = newb*(rate/100);
		double total = newb + inter;
		cout << fixed << setprecision(2);
		cout << setw(13) << left << i;
		cout << setw(13) << left << newb;
		cout << setw(13) << left << inter;
		cout << setw(13) << left << total;
		if(total < pay)
		{
			pay = total;
			newb = total - total;
		}
		cout << setw(13) << left << pay;
		newb = total - pay;
		cout << setw(13) << left << newb;
		cout << "\n";
		if(newb == 0)
		{
			break;
		}	
	}
	return 0;
}
