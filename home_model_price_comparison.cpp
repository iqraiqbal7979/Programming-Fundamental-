#include <iostream>
using namespace std;

int main() {
    int col_base_RP = 0, col_finish_area = 0, split_entry_base_RP = 0, split_entry_finish_area = 0,
        single_story_base_RP = 0, single_story_finish_area = 0;

    float col_RP_per_square_ft = 0.0, split_RP_per_square_ft = 0.0, single_story_RP_per_square_ft = 0.0;

    cout << "Please enter the colonial base price: ";
    cin >> col_base_RP;
    cout << "Enter the colonial finish area: ";
    cin >> col_finish_area;

    col_RP_per_square_ft = col_base_RP / col_finish_area;

    cout << "Please enter the split entry base price: ";
    cin >> split_entry_base_RP;
    cout << "Enter the split entry finish area: ";
    cin >> split_entry_finish_area;

    split_RP_per_square_ft = split_entry_base_RP / split_entry_finish_area;

    cout << "Please enter the single story base price: ";
    cin >> single_story_base_RP;
    cout << "Enter the single story finish area: ";
    cin >> single_story_finish_area;

    single_story_RP_per_square_ft = single_story_base_RP / single_story_finish_area;

    // Compare the prices per square foot
    if (col_RP_per_square_ft < split_RP_per_square_ft) {
        if (col_RP_per_square_ft < single_story_RP_per_square_ft) {
            cout << "Colonial model has the least price.";
        }
    }
    else if (split_RP_per_square_ft < col_RP_per_square_ft) {
        if (split_RP_per_square_ft < single_story_RP_per_square_ft) {
            cout << "Split entry model has the least price.";
        }
    }
    else if (single_story_RP_per_square_ft < split_RP_per_square_ft) {
        if (single_story_RP_per_square_ft < col_RP_per_square_ft) {
            cout << "Single story model has the least price.";
        }
    }
    else {
        cout << "All models have equal prices.";
    }

    return 0;
}
