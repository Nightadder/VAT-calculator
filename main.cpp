#include <iostream>

using namespace std;

int main()
{
    float invoice_amount;
    float percent;
    float VAT;
    float total;
    float raw_percent;
    cout << "Type your invoice amount: ";
    cin >> invoice_amount;
    cout << "Invoice percent in numbers: ";
    cin >> raw_percent;

    percent = invoice_amount * raw_percent;
    VAT = percent / 100;
    total = invoice_amount + tax;
    cout << "your VAT is " << VAT << endl;
    cout << "Your total is  " << total << endl;
    string END;
    cout << "";
    cin >> END;
    return 0;
}
