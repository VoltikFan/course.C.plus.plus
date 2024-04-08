#include <iostream>

using namespace std;

int main()
{
    int kids_in_bus1, kids_in_bus2, kids_in_bus3, total_kids, average_kids_per_bus, min_transfers = 0;
    cin >> kids_in_bus1 >> kids_in_bus2 >> kids_in_bus3;

    total_kids = kids_in_bus1 + kids_in_bus2 + kids_in_bus3;
    average_kids_per_bus = total_kids / 3;

    if (total_kids % 3 != 0) {
        cout << "NO SOLUTIONS";
    } 
    else {
        min_transfers += max(0, average_kids_per_bus - kids_in_bus1);
        min_transfers += max(0, average_kids_per_bus - kids_in_bus2);
        min_transfers += max(0, average_kids_per_bus - kids_in_bus3);
        
        cout << min_transfers;
    }       
    return 0;
}