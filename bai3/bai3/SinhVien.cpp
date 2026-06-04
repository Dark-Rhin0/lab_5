#include "SinhVien.h"

void SinhVien::Nhap() {
    cout << "Ma SV: ";
    cin >> maSV;

    cin.ignore();

    cout << "Ho ten: ";
    getline(cin, hoTen);

    cout << "Dia chi: ";
    getline(cin, diaChi);

    cout << "Tong tin chi: ";
    cin >> tongTinChi;

    cout << "Diem trung binh: ";
    cin >> diemTB;
}

void SinhVien::Xuat() {
    cout << setw(10) << maSV
        << setw(25) << hoTen
        << setw(10) << diemTB;
}

double SinhVien::getDiemTB() {
    return diemTB;
}

string SinhVien::getHoTen() {
    return hoTen;
}

SinhVien::~SinhVien() {}