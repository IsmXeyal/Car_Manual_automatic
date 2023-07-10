#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

#include"Car.h"
#include"Manual_auto.h"
#include"Types.h"

int main() {
    vector<Car*> cars;

    cars.push_back(new BMW("BMW", "BMW Vendor_1", Colors::Black, 2023, 6, true, true, 330, "M3", true));
    cars.push_back(new BMW("BMW", "BMW Vendor_2", Colors::Blue, 2012, 5, true, true, 250, "Series X", false));
    cars.push_back(new Toyota("Toyota", "Toyota Vendor", Colors::Red, 2015, true, false, true, "Trim Level_1", false, 4));
    cars.push_back(new Manual("Porsche", "Porsche Vendor", Colors::Green, 2019, 5, true, false, 200));
    cars.push_back(new Automatic("Audi A4", "Audi Vendor", Colors::White, 2009, true, true, false));

    for (auto car : cars) {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        car->Show();
        cout << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    }

    for (auto car : cars) {
        delete car;
    }

	return 0;
}
