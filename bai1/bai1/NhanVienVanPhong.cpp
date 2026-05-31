#include "NhanVienVanPhong.h"

void NhanVienVanPhong::Nhap()
{
    NhanVien::Nhap();

    cout << "So ngay lam: ";
    cin >> soNgayLam;
}

void NhanVienVanPhong::TinhLuong()
{
    luong = soNgayLam * 100000;
}

void NhanVienVanPhong::Xuat()
{
    cout << "\n=== NHAN VIEN VAN PHONG ===\n";

    NhanVien::Xuat();

    cout << "So ngay lam: " << soNgayLam << endl;
}