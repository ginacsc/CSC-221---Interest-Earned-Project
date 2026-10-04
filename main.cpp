//This program calculates the interest earned in one year by a savings account
//in which interest is compounded.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    cout << setprecision(2) << fixed;

    cout << "Enter principal amount as a numeric value:" << endl;
    double principal;
    cin >> principal;

    cout << "Enter interest rate percentage as a numeric value:" << endl;
    double interestRate;
    cin >> interestRate;
    double rateDecimal = interestRate / 100.00;

    cout << "Enter number of times interest is compounded in one year:" << endl;
    int timesCompounded;
    cin >> timesCompounded;

    double totalBalance = principal * pow(1 + rateDecimal / timesCompounded, timesCompounded);

    double interestEarned = totalBalance - principal;

    cout << "Interest rate: " << interestRate << endl;
    cout << "Number of times interest earned: " << timesCompounded << endl;
    cout << "Principal balance: $" << principal << endl;
    cout << "Interest earned: $" << interestEarned << endl;
    cout << "Total balance: $" << totalBalance << endl;

    return 0;
}