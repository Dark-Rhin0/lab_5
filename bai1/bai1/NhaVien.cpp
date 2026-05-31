#include "NhanVien.h"
#include <ctime>

NhanVien::NhanVien()
{
    luong = 0;
}

NhanVien::~NhanVien()
{
}

void NhanVien::Nhap()
{
    cin.ignore();

    cout << "Ho ten: ";
    getline(cin, hoTen);

    cout << "Ngay sinh (dd/mm/yyyy): ";
    getline(cin, ngaySinh);
}

void NhanVien::Xuat()
{
    cout << "Ho ten: " << hoTen << endl;
    cout << "Ngay sinh: " << ngaySinh << endl;
    cout << "Luong: " << luong << endl;
}

double NhanVien::LayLuong() const
{
    return luong;
}

int NhanVien::TinhTuoi() const
{
    int namSinh = stoi(ngaySinh.substr(6, 4));

    time_t t = time(0);
    tm* now = localtime(&t);

    int namHienTai = now->tm_year + 1900;

    return namHienTai - namSinh;
}