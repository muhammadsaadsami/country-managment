#include <iostream>
            #include <string>
            using namespace std;

struct CountryData {
    string countryName;
    int age;
    string medicalReport;
    string criminalReport;
    double bankBalance;
};

void displayCountryData(const CountryData &data) {
    cout << "Country: " << data.countryName << endl;
    cout << "Age: " << data.age << endl;
    cout << "Medical Report: " << data.medicalReport << endl;
    cout << "Criminal Report: " << data.criminalReport << endl;
    cout << "Bank Balance: $" << data.bankBalance << endl;
    cout << "---------------------------------" << endl;
}

int main() {
    CountryData countries[7] = {
        {"USA", 30, "Healthy", "No Criminal Record", 50000.75},
        {"Pakistan", 25, "Healthy", "No Criminal Record", 20000.50},
        {"UK", 40, "Diabetes", "No Criminal Record", 100000.00},
        {"Germany", 35, "Healthy", "No Criminal Record", 75000.00},
        {"Canada", 28, "Healthy", "No Criminal Record", 30000.25},
        {"Australia", 45, "Heart Condition", "No Criminal Record", 150000.00},
        {"Japan", 50, "Healthy", "No Criminal Record", 85000.50}
    };

    for (int i = 0; i < 7; ++i) {
        displayCountryData(countries[i]);
    }

    return 0;
}y