// Section 19
// Challenge 1
// Formatting output
#include <algorithm>
#include <ios>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
void ruler() {
    for (int i = 0; i < 10; i++)
        std::cout << 1234567890;
    std::cout << std::endl;
}
struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

int main() {
    const int full_width {100};
    const int first_field {30};
    const int second_field {30};
    const int third_field {15};
    const int fourth_field {15};
    Tours tours {
        "Tour Ticket Prices from Miami",
        {
            {
                "Colombia", {
                    { "Bogota", 8778000, 400.98 },
                    { "Cali", 2401000, 424.12 },
                    { "Medellin", 2464000, 350.98 },
                    { "Cartagena", 972000, 345.34 }
                },
            },
            {
                "Brazil", {
                    { "Rio De Janiero", 13500000, 567.45 },
                    { "Sao Paulo", 11310000, 975.45 },
                    { "Salvador", 18234000, 855.99 }
                },
            },
            {
                "Chile", {
                    { "Valdivia", 260000, 569.12 },
                    { "Santiago", 7040000, 520.00 }
                },
            },
            {
                "Argentina", {
                    { "Buenos Aires", 3010000, 723.77 }
                }
            },
        }
    };
    ruler();
    std::cout << std::setw(first_field) << std::left << "Country"
              << std::setw(second_field) << std::left << "City"
              << std::setw(third_field) << std::right << "Population"
              << std::setw(fourth_field) << std::right << "Price"
              << std::endl;
    // Unformatted display so you can see how to access the vector elements
    std::cout << std::setw((full_width - tours.title.length()) / 2) << "" << tours.title << std::endl;
    std::cout << std::setw(full_width) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::setprecision(2) << std::fixed;
    for (auto country : tours.countries) {  // loop through the countries
        // std::cout << country.name << std::endl;
        for (int i = 0 ; i < country.cities.size(); i++) {  // loop through the cities for each country
            std::cout << std::setw(first_field) << std::left << ((i == 0) ? country.name : "")
                      << std::setw(second_field) << std::left << country.cities.at(i).name
                      << std::setw(third_field) << std:: right << country.cities.at(i).population
                      << std::setw(third_field) << std::right << country.cities.at(i).cost
                      << std::endl;
        }
    }

    std::cout << std::endl << std::endl;
    return 0;
}
