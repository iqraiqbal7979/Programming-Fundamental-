#include <iostream>
using namespace std;

int main() {
    const int free_shipping_limit = 200;
    int no_of_items, total_cost;

    cout << "Enter the number of items you bought: ";
    cin >> no_of_items;

    cout << "Enter the total cost of items: ";
    cin >> total_cost;

    if (total_cost >= free_shipping_limit) {
        cout << "** Handling and shipping is free **" << endl;
    }
    else {
        int price = 0, final_total = 0;

        cout << "\n--- Calculating Total Cost (With Shipping) ---\n";
        for (int i = 1; i <= no_of_items; i++) {
            cout << "Enter price of item " << i << ": ";
            cin >> price;
            final_total += price + 10;
        }

        cout << "Total cost (with shipping): " << final_total << endl;
    }

    return 0;
}
