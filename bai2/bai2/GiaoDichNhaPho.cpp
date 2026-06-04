#include "GiaoDichNhaPho.h"

void GiaoDichNhaPho::Nhap() {
    GiaoDich::Nhap();

    cin.ignore();

    cout << "Loai nha (cao cap/thuong): ";
    getline(cin, loaiNha);

    cout << "Dia chi: ";
    getline(cin, diaChi);

    cout << "Dien tich: ";
    cin >> dienTich;
}

double GiaoDichNhaPho::ThanhTien() {
    if (loaiNha == "thuong")
        return dienTich * donGia * 0.9;

    return dienTich * donGia;
}

void GiaoDichNhaPho::Xuat() {
    GiaoDich::Xuat();

    cout << "Loai nha: " << loaiNha << endl;
    cout << "Dia chi: " << diaChi << endl;
    cout << "Dien tich: " << dienTich << endl;
    cout << "Thanh tien: " << ThanhTien() << endl;
}