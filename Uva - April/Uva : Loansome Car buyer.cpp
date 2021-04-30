#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using lln = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using ll= int;
using ld = double;
#define SIZE 100
int main() {
	int loanDur, nRec;
	double downPayment, loan, decP[101];

	while (true) {
		cin >> loanDur >> downPayment >> loan >> nRec;
		if (loanDur < 0)
			break;

		int m;
		double p;
		while (nRec--) {
			cin >> m >> p;
			for (int i = m; i < 101; i++)
				decP[i] = p;
		}

		int now = 0;
		double monthlyPayment = loan / loanDur;
		double car_Val = (loan + downPayment) * (1 - decP[0]);
         // cout<<car_Val<<endl;
		double car_Loan = loan;
		while (car_Val < car_Loan) {
			now++;
			car_Loan -= monthlyPayment;
			car_Val = car_Val * (1-decP[now]);
            //cout<<car_Val<<endl;
		}

		cout << now << " month";
		if (now != 1)
			cout << "s";
		cout << endl;
	}

	return 0;
}