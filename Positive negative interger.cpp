#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printDivisors(int num);
bool isPositiveInteger(int num);

int main() {
    int number;
    char choice;

    cout << "This program is designed to exhibit the positive divisors of positive integers you supply." << endl;
    cout << "The program will repeatedly prompt you to enter a positive integer." << endl;
    cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order." << endl;
    cout << "You can terminate the program by entering a zero or negative integer, or by choosing not to enter another integer after viewing the divisors." << endl;

    do {
        cout << "\nPlease enter a positive integer: ";
        cin >> number;
        if (isPositiveInteger(number)) {
            printDivisors(number);

            do {
                cout << "\nWould you like to see the divisors of another integer (Y/N)? ";
                cin >> choice;

                if (choice == 'Y' || choice == 'y' || choice == 'N' || choice == 'n') {
                    break; 
                } else {
                    cout << "Please respond with Y (or y) for yes and N (or n) for no." << endl;
                }
            } while (true);

        } else {
            cout << number << " is not a positive integer." << endl;
            cout << "Please enter a positive integer." << endl;
        }

    } while (choice == 'Y' || choice == 'y');

    cout << "Program terminated. Thank you for using the Divisor Finder Program!" << endl;

    return 0;
}

void printDivisors(int num) {
    vector<int> divisors;

    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            divisors.push_back(i);
        }
    }

    sort(divisors.rbegin(), divisors.rend());

}
bool isPositiveInteger(int num) {
    return num > 0;
}

