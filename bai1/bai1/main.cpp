#include <iostream>
#include <iomanip>
#include "CongTy.h"

using namespace std;

int main()
{
    CongTy ct;

    ct.NhapDanhSach();

    cout << "\n=============================\n";
    cout << "     DANH SACH NHAN VIEN\n";
    cout << "=============================\n";

    ct.XuatDanhSach();

    cout << fixed << setprecision(0);

    cout << "\nTong luong cong ty phai tra: "
        << ct.TongLuong()
        << endl;

    ct.NVSXLuongThapNhat();

    ct.NVVPLonTuoiNhat();

    return 0;
}