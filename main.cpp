
#include <iostream>
using namespace std;

int main()
{
	int prev, current;
    bool a1 = true;

    while (true) {
        int current;
        cout << "Enter an integer: ";
        cin >> current;

        if (a1) {
            prev = current;
            a1 = false;
        } else {
            if (current < prev) {
                cout << current << " ";
            } else {
                cout << endl;
                break;
            }
        }

        prev = current;
    }
}
