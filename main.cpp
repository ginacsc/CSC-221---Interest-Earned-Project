//This program calculates the interest earned in one year by a savings account
//in which interest is compounded.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    cout << setprecision(2) << fixed;

    cout << "This program calculates the interest earned in one year for a savings account." << endl;

    cout << endl;

    cout << "Enter principal amount: ";
    double principal;
    cin >> principal;

    cout << "Enter annual interest rate percentage: ";
    double interestRate;
    cin >> interestRate;
    double rateDecimal = interestRate / 100.00;

    cout << "Enter number of times interest is compounded in one year: ";
    int timesCompounded;
    cin >> timesCompounded;

    cout << endl;

    double totalBalance = principal * pow(1 + rateDecimal / timesCompounded, timesCompounded);

    double interestEarned = totalBalance - principal;

    cout << "Interest rate: " << interestRate << "%" << endl;
    cout << "Number of times interest earned: " << timesCompounded << endl;
    cout << "Principal balance: $" << principal << endl;
    cout << "Interest earned: $" << interestEarned << endl;
    cout << "Total balance in savings: $" << totalBalance << endl;

    return 0;
}