#include "GiaoDich.h"

void GiaoDich::Nhap() {
    cin.ignore();

    cout << "Ma giao dich: ";
    getline(cin, maGD);

    cout << "Ngay giao dich (dd/mm/yyyy): ";
    getline(cin, ngayGD);

    cout << "Don gia: ";
    cin >> donGia;
}

void GiaoDich::Xuat() {
    cout << "Ma GD: " << maGD << endl;
    cout << "Ngay GD: " << ngayGD << endl;
    cout << "Don gia: " << donGia << endl;
}