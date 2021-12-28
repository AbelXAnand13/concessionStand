//Abel Anand
#include <iostream>
using namespace std;

void menu() {
    cout << "\nMENU\nEnter the number of the food or drink you want to buy\nEnter 5 when you are done\n1. Blue Rasberry Slushie(Sizes available)\n2. Popcorn(Sizes available)\n3. Hot Dog- $4\n4. Pizza- $8\n\nSIZE CHART\n1.Small- $1   2.Medium- $2   3.Large- $3   4.Family Size(200%Large Save 16%)- $5\n\n";
}

float tax(float price) {
    cout << "Price: " << price << endl;
    float tax = .10 * price;
    cout << "Tax: " << tax << endl;
    float total = price + tax;
    cout << "Total: " << total << endl;
    return total;
}

int main() {
    int food;
    int size;
    bool quit = false;
    float price = 0;
    enum sizes {
        small = 1,
        medium = 2,
        large = 3,
        familySize = 5
    };
    sizes drink;
    sizes popcorn;
    cout << "Welcome to Faster Food\n";
    menu();
    while (!quit) {
        cout << "Enter your choice\n";
    cin >> food;
    switch (food) {
        case 1:
            cout << "What size\n";
            cin >> size;
            switch (size) {
                case 1:
                    drink = small;
                    price += drink;
                    cout <<"+1 small drink\n";
                    break;
                case 2:
                    drink = medium;
                    price += drink;
                    cout <<"+1 medium drink\n";
                    break;
                case 3:
                    drink = large;
                    price += drink;
                    cout <<"+1 large drink\n";
                    break;
                case 4:
                    drink = familySize;
                    price += familySize;
                    cout <<"+1 family size drink\n";
                    break;
                default:
                    cout << "Bruh\n";
                    break;
            }
            break;
        case 2:
            cout << "What size\n";
            cin >> size;
            switch (size) {
                case 1:
                    popcorn = small;
                    price += popcorn;
                    cout <<"+1 small popcorn\n";
                    break;
                case 2:
                    popcorn = medium;
                    price += popcorn;
                    cout <<"+1 medium popcorn\n";
                    break;
                case 3:
                    popcorn = large;
                    price += popcorn;
                    cout <<"+1 large popcorn\n";
                case 4:
                    popcorn = familySize;
                    price += familySize;
                    cout <<"+1 family size popcorn\n";
                default:
                    break;
            }
            break;
        case 3:
            price += 4;
            cout << "+1 Hot Dog\n";
            break;
        case 4:
            price += 8;
            cout << "+1 Pizza\n";
            break;
        case 5:
            tax(price);
            quit = true;
            break;
        default:
            cout << "Please enter a right choice or exit\n";
            break;
    }
    }
}

