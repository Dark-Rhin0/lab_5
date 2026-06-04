#include "CongTy.h"
#include "LapTrinhVien.h"
#include "KiemChungVien.h"

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
    for (NhanVien* nv : ds)
        nv->Xuat();
}

double CongTy::LuongTB() {
    double tong = 0;

    for (NhanVien* nv : ds)
        tong += nv->TinhLuong();

    return tong / ds.size();
}

void CongTy::LuongDuoiTB() {
    double tb = LuongTB();

    cout << "\nNhan vien co luong duoi trung binh:\n";

    for (NhanVien* nv : ds)
        if (nv->TinhLuong() < tb)
            nv->Xuat();
}

void CongTy::LuongCaoNhat() {
    NhanVien* maxNV = ds[0];

    for (NhanVien* nv : ds)
        if (nv->TinhLuong() > maxNV->TinhLuong())
            maxNV = nv;

    maxNV->Xuat();
}

void CongTy::LuongThapNhat() {
    NhanVien* minNV = ds[0];

    for (NhanVien* nv : ds)
        if (nv->TinhLuong() < minNV->TinhLuong())
            minNV = nv;

    minNV->Xuat();
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

    if (maxLTV)
        maxLTV->Xuat();
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

    if (minKCV)
        minKCV->Xuat();
}