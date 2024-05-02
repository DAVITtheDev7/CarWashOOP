#include <iostream>
#include <string> 
using namespace std;

class Carwash {
protected:
    string pnumbers[100];
    int price;
    int numCars;
public:
    Carwash() {
        numCars = 0;
    }

    void washCar(string pnumber, int price) {
        bool found = false;

        if (price < 0) {
            cout << "Price can not be negative number" << endl << endl;
        }
        else {
            if (price < 10) {
                cout << "Your balance is not enough to wash car." << endl << endl;
            }
            else if (price >= 10 && price <= 17) {
                pnumbers[numCars++] = pnumber;
                cout << "Car with plate number " << pnumber << " has washed.  " << endl;
                cout << "You paid " << price << " Gel" << " | ";
                cout << "Odd money: " << price - 10 << " Gel. " << endl;
                cout << "Your time: 20 Minutes. " << endl << endl;
            }
            else {
                for (int i = 0; i < numCars; ++i) {
                    if (pnumbers[i] == pnumber) {
                        found = true;
                        break;
                    }
                }
                if (found) {
                    cout << "Car with plate number " << pnumber << " has washed.  " << endl;
                    cout << "You paid " << price << " Gel" << " | ";
                    cout << "Odd money: " << price % 7 << " Gel. " << endl;
                    cout << "Your time: " << (price / 7) * 20 << " Minutes. " << endl << endl;
                }
                else {
                    if (numCars < 100) {
                        pnumbers[numCars++] = pnumber;
                        cout << "Car with plate number " << pnumber << " has washed.  " << endl;
                        cout << "You paid " << price << " Gel" << " | ";
                        cout << "Odd money: " << (price - 10) % 7 << " Gel. " << endl;
                        cout << "Your time: " << (((price - 10) / 7) * 20) + 20 << " Minutes. " << endl << endl;

                    }
                    else {
                        cout << "Daily limit has been reached" << endl;
                    }
                }
            }
        }
    }
};

int main() {
    Carwash carwash;

    carwash.washCar("AB-123-BA", 21);
    carwash.washCar("AB-123-BA", 21);

    carwash.washCar("AC-123-CA", 21);


    carwash.washCar("DC-123-CA", -21);

    return 0;
}
