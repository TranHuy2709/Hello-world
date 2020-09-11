
#include "NhanVien.h"
NhanVien nv[20];
int soluong;
float heSoLuong[5] = { 1.5,2.0,2.8,4.0,5.0 };

void khoiTao()
{
    nv[0].maNhanVien = "SF1000";
    nv[0].hoTen = "Tran Minh Tuan";
    nv[0].diaChi = "Ha Noi";
    nv[0].heSoLuong = 2.0;
    nv[0].phuCap = 300000;
    nv[0].hienThiPhuCap = nv[0].hienThiSo(300000);
    nv[0].phongBan = "CNTT";
    nv[0].tongLuong = nv[0].heSoLuong * 2000000 + nv[0].phuCap;
    nv[0].hienThiLuong = nv[0].hienThiSo(nv[0].tongLuong);

    nv[1].maNhanVien = "SF1001";
    nv[1].hoTen = "Nguyen Minh Son";
    nv[1].diaChi = "Nam Dinh";
    nv[1].heSoLuong = 3.2;
    nv[1].phuCap = 500000;
    nv[1].hienThiPhuCap = nv[1].hienThiSo(500000);
    nv[1].phongBan = "CNTT";
    nv[1].tongLuong = nv[1].heSoLuong * 2000000 + nv[1].phuCap;
    nv[1].hienThiLuong = nv[1].hienThiSo(nv[1].tongLuong);

    nv[2].maNhanVien = "SF1002";
    nv[2].hoTen = "Cao Ba Cuong";
    nv[2].diaChi = "Thai Binh";
    nv[2].heSoLuong = 3.2;
    nv[2].phuCap = 500000;
    nv[2].hienThiPhuCap = nv[2].hienThiSo(500000);
    nv[2].phongBan = "KT";
    nv[2].tongLuong = nv[2].heSoLuong * 2000000 + nv[2].phuCap;
    nv[2].hienThiLuong = nv[2].hienThiSo(nv[2].tongLuong);

    nv[3].maNhanVien = "SF1003";
    nv[3].hoTen = "Bui Minh Khue";
    nv[3].diaChi = "Hai Duong";
    nv[3].heSoLuong = 1.5;
    nv[3].phuCap = 200000;
    nv[3].hienThiPhuCap = nv[3].hienThiSo(200000);
    nv[3].phongBan = "CNTT";
    nv[3].tongLuong = nv[3].heSoLuong * 2000000 + nv[3].phuCap;
    nv[3].hienThiLuong = nv[3].hienThiSo(nv[3].tongLuong);

    nv[4].maNhanVien = "SF1004";
    nv[4].hoTen = "Le Hai Ha";
    nv[4].diaChi = "Ha Noi";
    nv[4].heSoLuong = 2.8;
    nv[4].phuCap = 400000;
    nv[4].hienThiPhuCap = nv[4].hienThiSo(400000);
    nv[4].phongBan = "KT";
    nv[4].tongLuong = nv[4].heSoLuong * 2000000 + nv[4].phuCap;
    nv[4].hienThiLuong = nv[4].hienThiSo(nv[4].tongLuong);

    nv[5].maNhanVien = "SF1005";
    nv[5].hoTen = "Dang Hai Nam";
    nv[5].diaChi = "Thai Binh";
    nv[5].heSoLuong = 1.5;
    nv[5].phuCap = 200000;
    nv[5].hienThiPhuCap = nv[5].hienThiSo(200000);
    nv[5].phongBan = "KD";
    nv[5].tongLuong = nv[5].heSoLuong * 2000000 + nv[5].phuCap;
    nv[5].hienThiLuong = nv[5].hienThiSo(nv[5].tongLuong);

    nv[6].maNhanVien = "SF1006";
    nv[6].hoTen = "Vu Phuong Thao";
    nv[6].diaChi = "Ha Nam";
    nv[6].heSoLuong = 3.2;
    nv[6].phuCap = 500000;
    nv[6].hienThiPhuCap = nv[6].hienThiSo(500000);
    nv[6].phongBan = "KD";
    nv[6].tongLuong = nv[6].heSoLuong * 2000000 + nv[6].phuCap;
    nv[6].hienThiLuong = nv[6].hienThiSo(nv[6].tongLuong);

    nv[7].maNhanVien = "SF1007";
    nv[7].hoTen = "Pham Thanh Tung";
    nv[7].diaChi = "Hai Duong";
    nv[7].heSoLuong = 4.0;
    nv[7].phuCap = 1000000;
    nv[7].hienThiPhuCap = nv[7].hienThiSo(1000000);
    nv[7].phongBan = "CNTT";
    nv[7].tongLuong = nv[7].heSoLuong * 2000000 + nv[7].phuCap;
    nv[7].hienThiLuong = nv[7].hienThiSo(nv[7].tongLuong);

    nv[8].maNhanVien = "SF1008";
    nv[8].hoTen = "Tran Duc Minh";
    nv[8].diaChi = "Ha Nam";
    nv[8].heSoLuong = 2.0;
    nv[8].phuCap = 300000;
    nv[8].hienThiPhuCap = nv[8].hienThiSo(300000);
    nv[8].phongBan = "CNTT";
    nv[8].tongLuong = nv[8].heSoLuong * 2000000 + nv[8].phuCap;
    nv[8].hienThiLuong = nv[8].hienThiSo(nv[8].tongLuong);

    nv[9].maNhanVien = "SF1009";
    nv[9].hoTen = "Le Minh Huy";
    nv[9].diaChi = "Hai Phong";
    nv[9].heSoLuong = 2.0;
    nv[9].phuCap = 300000;
    nv[9].hienThiPhuCap = nv[9].hienThiSo(300000);
    nv[9].phongBan = "KD";
    nv[9].tongLuong = nv[9].heSoLuong * 2000000 + nv[9].phuCap;
    nv[9].hienThiLuong = nv[9].hienThiSo(nv[9].tongLuong);

    soluong = 10;
}
void nhapThongTin()
{
    int N;
    cout << "Nhap so luong nhan vien: ";
    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++)
    {
        cout << "Nhap thong tin nhan vien: " << endl;
        nv[i + soluong].nhap();
    }
    soluong += N;
}
void hienThiThongTin()
{
    cout << "-----------------------------------------------------------------------------------------" << endl;
    cout << "||  Ma NV  ||      Ho ten       ||   Que quan || He so luong ||  Phu cap  || Phong ban ||       Luong       ||" << endl;
    for (int i = 0; i < soluong; i++)
    {
        nv[i].hienThi();
    }
}
void sapXepTheoLuong()
{
    cout << "-----------------------------------------------------------------------------------------" << endl;
    cout << "Sap xep nhan vien vien theo muc luong giam dan: " << endl;
    cout << "||  Ma NV  ||      Ho ten       ||   Que quan || He so luong ||  Phu cap  || Phong ban ||       Luong       ||" << endl;
    for (int i = 0; i < soluong - 1; i++)
    {
        for (int j = i + 1; j < soluong; j++)
        {
            if (nv[i].tongLuong < nv[j].tongLuong)
            {
                NhanVien temp = nv[j];
                nv[j] = nv[i];
                nv[i] = temp;
            }
        }
    }
    for (int i = 0; i < soluong; i++)
    {
        nv[i].hienThi();
    }
}
string chuyenChuoiThanhChuThuong(string& str)
{
    int l = str.length();
    for (int i = 0; i < l; i++)
    {
        str[i] = tolower(str[i]);
    }
    return str;
}
void timKiemTheoMaNV()
{
    cout << "-----------------------------------------------------------------------------------------" << endl;
    string strMaNV;
    cout << "Nhap ma NV can tim kiem: ";
    cin.ignore();
    getline(cin, strMaNV);
    cout << "||  Ma NV  ||      Ho ten       ||   Que quan || He so luong ||  Phu cap  || Phong ban ||       Luong       ||" << endl;
    chuyenChuoiThanhChuThuong(strMaNV);
    bool ktraMaNV = false;
    for (int i = 0; i < soluong; i++)
    {
        nv[i].maNhanVien = chuyenChuoiThanhChuThuong(nv[i].maNhanVien);
        for (int j = 0; j <= nv[i].maNhanVien.length() - strMaNV.length(); j++)
        {
            string strSoSanh;
            for (int k = j; k <= j + strMaNV.length(); k++)
            {
                strSoSanh += nv[i].maNhanVien[k];
                if (strSoSanh == strMaNV)
                {
                    nv[i].hienThi();
                    ktraMaNV = true;
                }
            }
        }
    }
    if (ktraMaNV == false)
    {
        cout << "Khong co nhan vien nao co ma so nhu tren." << endl;
    }
}
string daoNguocTen(string& str)
{
    str[0] = toupper(str[0]);
    string temp = str;
    str = "";
    for (int i = temp.length() - 1; i >= 0; i--)
    {
        str += temp[i];
    }
    return str;
}
string tachTen(string& str,int &kiTu)
{
    string tenNguoc;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] != ' ')
        {
            tenNguoc += str[i];
            kiTu++;
        }
        else
        {
            break;
        }
    }
    string ten;
    for (int i = tenNguoc.length() - 1; i >= 0; i--)
    {
        ten += tolower(tenNguoc[i]);
    }
    return ten;
}
void timKiemTheoTen()
{
    cout << "-----------------------------------------------------------------------------------------" << endl;
    string strTen;
    cout << "Nhap ten NV can tim kiem: ";
    getline(cin, strTen);
    cout << "||  Ma NV  ||      Ho ten       ||   Que quan || He so luong ||  Phu cap  || Phong ban ||       Luong       ||" << endl;
    daoNguocTen(strTen);
    bool ktra = false;
    for (int i = 0; i < soluong; i++)
    {
        bool ktraTen = false;
        string temp = nv[i].hoTen;
        daoNguocTen(temp);
        for (int j = 0; j <= temp.length() - strTen.length(); j++)
        {
            string strSoSanh = "";
            for (int k = j; k < j + strTen.length(); k++)
            {
                strSoSanh += temp[k];
                if (strSoSanh == strTen)
                {
                    nv[i].hienThi();
                    ktraTen = true;
                    ktra = true;
                    break;
                }
            }
            if (ktraTen == true)
            {
                break;
            }
        }
    }
    if (ktra == false)
    {
        cout << "Khong co nhan vien nao co ten nhu tren." << endl;
    }
}

void timKiemTheoTenNew()
{
    cout << "-----------------------------------------------------------------------------------------" << endl;
    string strTen;
    cout << "Nhap ten NV can tim kiem: ";
    getline(cin, strTen);
    strTen = chuyenChuoiThanhChuThuong(strTen);
    bool ktraTen = false;
    cout << "||  Ma NV  ||      Ho ten       ||   Que quan || He so luong ||  Phu cap  || Phong ban ||       Luong       ||" << endl;
    for (int i = 0; i < soluong; i++)
    {
        string temp = nv[i].hoTen;
        int soKiTu = 0; 
        do {
            string soSanh = tachTen(temp, soKiTu);
            if (soSanh == strTen)
            {
                nv[i].hienThi();
                ktraTen = true;
                break;
            }
            else
            {
                soKiTu++;
                temp = "";
                for (int k = 0; k < (nv[i].hoTen.length() - soKiTu); k++)
                {
                    temp += nv[i].hoTen[k];
                }
            }
        } while (temp != "");
    }
    if (ktraTen == false)
    {
        cout << "Khong co ten nhan vien nhu tren." << endl;
    }
}
void tangLuong()
{
    cout << "-----------------------------------------------------------------------------------------" << endl;
    cout << "Thong tin nhan vien sau khi tang luong: " << endl;
    cout << "||  Ma NV  ||      Ho ten       ||   Que quan || He so luong ||  Phu cap  || Phong ban ||       Luong       ||" << endl;
    for (int i = 0; i < soluong; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (nv[i].heSoLuong == nv[i].bacLuong[j])
            {
                nv[i].heSoLuong = nv[i].bacLuong[j + 1];
                break;
            }
        }
        nv[i].phuCap += 200000;
        nv[i].tongLuong = nv[i].heSoLuong * 2000000 + nv[i].phuCap;
    }
    for (int i = 0; i < soluong; i++)
    {
        nv[i].hienThi();
    }
}
void ghiDanhSachRaFile()
{
    fstream f("DanhSachNhanVien.txt", ios::out);
    f << "||  Ma NV  ||      Ho ten       ||   Que quan || He so luong ||  Phu cap  || Phong ban ||       Luong       ||" << endl;
    for (int i = 0; i < soluong; i++)
    {
        f << setw(10) << nv[i].maNhanVien
            << setw(20) << nv[i].hoTen
            << setw(15) << nv[i].diaChi
            << setw(12) << fixed << setprecision(1) << nv[i].heSoLuong
            << setw(15) << nv[i].phuCap
            << setw(12) << nv[i].phongBan
            << setw(19) << nv[i].tongLuong << endl;
    }
    f.close();
}

int main()
{
    khoiTao();
    nhapThongTin();
    hienThiThongTin();
    timKiemTheoTenNew();
}
//test git
//test branch
