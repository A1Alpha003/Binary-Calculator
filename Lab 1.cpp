#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
    int opt;

    cout << "Select An Operation You Would Like To Perform:" << endl;
    cout << "1. Binary To Decimal Conversion" << endl;
    cout << "2. Decimal To Binary Conversion" << endl;
    cout << "3. Binary Addition" << endl;
    cout << "4. Binary Subtraction" << endl;
    cin >> opt;

    if (opt == 1) {
        int bin[4], deci = 0;

        cout << "Enter A Binary Number You Wish To Convert:" << endl;
        for (int i = 0; i < 4; i++) {
            cin >> bin[i];
        }

        for (int i = 0; i < 4; i++) {
            deci += bin[i] * pow(2, i); 
        }

        cout << "Your Decimal Number is: " << deci << endl;

    }
    else if (opt == 2) {
        int deci1;

        cout << "Enter A Decimal Number You Wish To Convert:" << endl;
        cin >> deci1;

        cout << "Your Binary Is As Follows" << endl;
        do {
            int mod = deci1 % 2;
            deci1 /= 2;
            cout << mod << endl;  
        } while (deci1 != 0);

    }
    else if (opt == 3) {
        int bin[4], bin1[4], deci = 0, deci1 = 0, deci2 = 0;

        cout << "Enter The First Binary Number:" << endl;
        for (int i = 0; i < 4; i++) {
            cin >> bin[i];
        }

        cout << "Enter The Second Binary Number:" << endl;
        for (int i = 0; i < 4; i++) {
            cin >> bin1[i];
        }

        for (int i = 0; i < 4; i++) {
            deci += bin[i] * pow(2, i);
        }

        for (int i = 0; i < 4; i++) {
            deci1 += bin1[i] * pow(2, i);
        }

        deci2 = deci + deci1;

        cout << "Your Answer In Decimal Is: " << deci2 << endl;

        cout << "Your Binary Is As Follows" << endl;
        do {
            int mod = deci2 % 2;
            deci2 /= 2;
            cout << mod << endl;  
        } while (deci2 != 0);

    }
    else if (opt == 4) {
        int bin[4], bin1[4], deci = 0, deci0 = 0, deci2 = 0;

        cout << "Enter The First Binary Number:" << endl;
        for (int i = 0; i < 4; i++) {
            cin >> bin[i];
        }

        cout << "Enter The Second Binary Number:" << endl;
        for (int i = 0; i < 4; i++) {
            cin >> bin1[i];
        }

        for (int i = 0; i < 4; i++) {
            deci += bin[i] * (1 << i);  
        }

        for (int i = 0; i < 4; i++) {
            deci0 += bin1[i] * (1 << i); 
        }

        deci2 = deci - deci0;

        cout << "Your Answer In Decimal Is: " << deci2 << endl;

        cout << "Your Binary Is As Follows" << endl;
        do {
            int mod = deci2 % 2;
            deci2 /= 2;
            cout << mod << endl; 
        } while (deci2 != 0);

    }
    else {
        cout << "Enter An Option Number Between 1 & 4." << endl;
    }

    return 0;
}
