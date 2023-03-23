#include <iostream>
using namespace std;


int arr[20];
int n;

void  input() {

    while (true) {                                              //looping
        cout << "masukan elemen/jumlah data array : \n";
        cin >> n;
        if (n <= 20)                                            // n <= 20
            break;                                              // keluar looping
        else {                                                  // n > 20
            cout << "array hanya bisa memiliki maksimal 20 elemen";
        }
    }

    cout << endl;
    cout << "=================================" << endl;
    cout << "     masukan elemen array        " << endl;
    cout << "=================================" << endl;

    for (int i = 0; i < n; i++) {                                // looping memasukan data ke array
        cout << "masukan data ke-" << (i + 1) << ":";
        cin >> arr[i];
    }

}

void insertionsort() {
    int key, j;                                           // Mendeklarasikan variable
    for (int i = 1; i < n; i++){                                 // looping untuk menyimpan variable ke temp
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key){                      // menyimpan array temp ke array j
            arr[j + 1] = arr[j];
            j --;
        }
        arr[j + 1] = key;

        cout << "\nStep " << i << ": ";
        for (int k = 0; k < n; k++) {                                // looping memasukan data ke array
            cout << arr[k] << endl;
        }
    }
}

void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "element array yang telah tersusun" << endl;
    cout << "=================================" << endl;

    for (int j = 0; j < n; j++) {                                // looping memasukan data ke array
        cout << arr[j] << endl;
    }
}


int main() {
    input();
    insertionsort();
    display();
    return  0;
}