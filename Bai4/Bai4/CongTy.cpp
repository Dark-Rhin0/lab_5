#include "CongTy.h"
#include "LapTrinhVien.h"
#include "KiemChungVien.h"

#include <iomanip>

CongTy::~CongTy() {
    for (NhanVien* nv : ds)
        delete nv;
}

void CongTy::NhapDS() {
    int n;

    cout << "Nhap so nhan vien: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int loai;

        cout << "\n1. Lap trinh vien";
        cout << "\n2. Kiem chung vien";
        cout << "\nChon loai: ";
        cin >> loai;

        NhanVien* nv;

        if (loai == 1)
            nv = new LapTrinhVien();
        else
            nv = new KiemChungVien();

        nv->Nhap();

        ds.push_back(nv);
    }
}

void CongTy::XuatDS() {
    if (ds.empty()) {
        cout << "Khong co nhan vien\n";
        return;
    }

    for (NhanVien* nv : ds)
        nv->Xuat();
}

double CongTy::LuongTB() {
    if (ds.empty())
        return 0;

    double tong = 0;

    for (NhanVien* nv : ds)
        tong += nv->TinhLuong();

    return tong / ds.size();
}

void CongTy::LuongDuoiTB() {
    if (ds.empty()) {
        cout << "Khong co nhan vien\n";
        return;
    }

    double tb = LuongTB();

    for (NhanVien* nv : ds) {
        if (nv->TinhLuong() < tb)
            nv->Xuat();
    }
}

void CongTy::LuongCaoNhat() {
    if (ds.empty()) {
        cout << "Khong co nhan vien\n";
        return;
    }

    NhanVien* maxNV = ds[0];

    for (NhanVien* nv : ds) {
        if (nv->TinhLuong() > maxNV->TinhLuong())
            maxNV = nv;
    }

    maxNV->XuatThongTin();

    cout << "Luong: "
        << fixed
        << setprecision(0)
        << maxNV->TinhLuong()
        << endl;
}

void CongTy::LuongThapNhat() {
    if (ds.empty()) {
        cout << "Khong co nhan vien\n";
        return;
    }

    NhanVien* minNV = ds[0];

    for (NhanVien* nv : ds) {
        if (nv->TinhLuong() < minNV->TinhLuong())
            minNV = nv;
    }

    minNV->XuatThongTin();

    cout << "Luong: "
        << fixed
        << setprecision(0)
        << minNV->TinhLuong()
        << endl;
}

void CongTy::LTVLuongMax() {
    LapTrinhVien* maxLTV = nullptr;

    for (NhanVien* nv : ds) {
        LapTrinhVien* ltv =
            dynamic_cast<LapTrinhVien*>(nv);

        if (ltv) {
            if (maxLTV == nullptr ||
                ltv->TinhLuong() > maxLTV->TinhLuong())
                maxLTV = ltv;
        }
    }

    if (maxLTV == nullptr) {
        cout << "Khong co lap trinh vien\n";
        return;
    }

    maxLTV->XuatThongTin();

    cout << "Luong: "
        << fixed
        << setprecision(0)
        << maxLTV->TinhLuong()
        << endl;
}

void CongTy::KCVLuongMin() {
    KiemChungVien* minKCV = nullptr;

    for (NhanVien* nv : ds) {
        KiemChungVien* kcv =
            dynamic_cast<KiemChungVien*>(nv);

        if (kcv) {
            if (minKCV == nullptr ||
                kcv->TinhLuong() < minKCV->TinhLuong())
                minKCV = kcv;
        }
    }

    if (minKCV == nullptr) {
        cout << "Khong co kiem chung vien\n";
        return;
    }

    minKCV->XuatThongTin();

    cout << "Luong: "
        << fixed
        << setprecision(0)
        << minKCV->TinhLuong()
        << endl;
}