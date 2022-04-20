#include <iostream>

using namespace std;

int main() {
    int n = 0;

    cout << "Enter a positive number: ";
    cin >> n;

    cout << n;

    while ( n != 1 ) {
        if ( n % 2 == 0 ) {  // n çift sayıysa
            // n sayısını 2'ye böl
            n = n/2;
        } else { // n sayısı tek ise
            // n => 3 * n + 1 formülünü uygula
            n = 3 * n + 1;
        }

        cout << " " << n;
    }
    // neticede, sayı dizisi 4 - 2 - 1 şeklinde bitip, 1 ve 4 arasında döngüye giriyor.


    cout << endl;

    return 0;
}