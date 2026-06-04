#include "GiaoDichDat.h"

void GiaoDichDat::Nhap() {
    GiaoDich::Nhap();

    cout << "Loai dat (A/B/C): ";
    cin >> loaiDat;

    cout << "Dien tich: ";
    cin >> dienTich;
}

double GiaoDichDat::ThanhTien() {
    if (loaiDat == 'A')
        return dienTich * donGia * 1.5;

    return dienTich * donGia;
}

void GiaoDichDat::Xuat() {
    GiaoDich::Xuat();

    cout << "Loai dat: " << loaiDat << endl;
    cout << "Dien tich: " << dienTich << endl;
    cout << "Thanh tien: " << ThanhTien() << endl;
}