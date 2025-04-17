#include <iostream>
using namespace std;

class BankDeposit {
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r); // r can be 0.03
    BankDeposit(int p, int y, int r);   // r can be 3
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r) {
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for (int i = 0; i < y; i++) {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit::BankDeposit(int p, int y, int r) {
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;

    for (int i = 0; i < y; i++) {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit::show() {
    cout << endl
         << "Principal value was " << principal
         << ". Return value after " << years
         << " years is " << returnValue << endl;
}

int main() {
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;

    cout << "Enter the value of p, y and r (float): " << endl;
    cin >> p >> y >> r;

    bd1 = BankDeposit(p, y, r);
    bd1.show();

    int R;
    cout << "\nEnter the value of p, y and R (int): " << endl;
    cin >> p >> y >> R;

    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}
