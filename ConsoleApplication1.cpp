

#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;

bool chiaHet(int a, int b) {
    // Kiểm tra nếu bằng 0 thì không thể chia được
    if (b == 0) {
        cout << "Error: không chia h." << endl;
        return false;
    }

    // Kiểm tra nếu a chia hết cho b
    if (a % b == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int a, b;
    cout << "Nhap vao so nguyen duong a: ";
    cin >> a;
    cout << "Nhap vao so nguyen duong b: ";
    cin >> b;

    if (a < 0 || b < 0) {
       cout << "Error: Nhap sai gia tri. Phai la so nguyen duong." << endl;
        return 1;
    }

    if (chiaHet(a, b)) {
        cout << a << " chia het cho " << b << endl;
    }
    else {
        cout << a << " khong chia het cho " << b << endl;
    }

    return 0;
}


