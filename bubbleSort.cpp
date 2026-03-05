#include <iostream>
#include <string>
using namespace std;
 
int arr[20]; //Deklarasi variable global array a dengan ukuran 20
int n; //Deklarasi variable global n untuk menyimpan banyaknya elemen

void input() {          //prosedur untuk input
    while (true) {
        cout << "Masukkan banyaknya elemen pada array : "; 
        cin >> n; 
        if (n<=20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
}
