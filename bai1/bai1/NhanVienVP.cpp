#include "NhanVienVP.h"

void NhanVienVP::Nhap()
{
    NhanVien::Nhap();

    cout << "So ngay lam: ";
    cin >> SoNgayLam;
}

void NhanVienVP::TinhLuong()
{
    Luong = SoNgayLam * 100000;
}

void NhanVienVP::Xuat()
{
    cout << "\n===== NHAN VIEN VAN PHONG =====\n";

    NhanVien::Xuat();

    cout << "So ngay lam: "
        << SoNgayLam << endl;
}