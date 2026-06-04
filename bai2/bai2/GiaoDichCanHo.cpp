#include "GiaoDichCanHo.h"

void GiaoDichCanHo::Nhap() {
    GiaoDich::Nhap();

    cin.ignore();

    cout << "Ma can: ";
    getline(cin, maCan);

    cout << "Vi tri tang: ";
    cin >> viTriTang;

    cout << "Dien tich: ";
    cin >> dienTich;
}

double GiaoDichCanHo::ThanhTien() {

    if (viTriTang == 1)
        return dienTich * donGia * 2;

    if (viTriTang >= 15)
        return dienTich * donGia * 1.2;

    return dienTich * donGia;
}

void GiaoDichCanHo::Xuat() {
    GiaoDich::Xuat();

    cout << "Ma can: " << maCan << endl;
    cout << "Vi tri tang: " << viTriTang << endl;
    cout << "Dien tich: " << dienTich << endl;
    cout << "Thanh tien: " << ThanhTien() << endl;
}