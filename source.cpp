#include "header.h"
using namespace std;

void nhap(int& n, int a[10])
{
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		do
		{
			cout << "a[" << i << "]: ";
			cin >> a[i];
		} while (a[i] == 0); // Dieu kien sai
	}
}
void xuat(int& n, int a[10])
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]" << a[i] << endl;
	}
}
//Dem vi tri chan
int demchan(int& n, int a[10])
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			dem++;
		}
	}
	return dem;
}
//4 liệt kê tất cả các vị trí lẻ trong mảng
void vitrile(int& n, int a[50])
{
	cout << endl;
	cout << "Cac vi tri co phan tu le: ";
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 1)
		{
			cout << i << " ";
		}
	}
}
//In ra các số chính phương đầu tiên có trong mảng.
void scpdautien(int& n, int a[10])
{
	cout << endl;
	cout << "So chinh phuong dau tien: ";
	for (int i = 0; i < n; i++)
	{
		if (sqrt(a[i]) * sqrt(a[i]) == a[i])
		{
			cout << a[i];
			break;
		}
	}
}
//Viết hàm tính trung bình cộng các số chẵn và là các số âm trong mảng.
int tbcchanam(int& n, int a[10])
{
	cout << endl;
	cout << "Trung binh cong cac so chan am: ";
	int dem = 0;
	float tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] < 0)
		{
			dem++;
			tong += a[i];
		}
	}
	if (dem == 0) return dem;
	float tbc = tong / dem;
	return tbc;
}
//Viết hàm kiểm tra trong mảng có giá trị âm hay không ? Nếu có trả về true, ngược lại trả về false.
bool ktam(int& n, int a[10])
{

	cout << endl;
	cout << "Dung ghi so 1 sai ghi so 0: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0) return true;
	}
	return false;
}
//Viết hàm in ra số nguyên tố có trong mảng.
bool ktsnt(int x)
{
	if (x < 2)
	{
		return false;
		for (int i = 0; i < x; i++)
		{
			if (x % 2 == 0)
				return false;
		}
	}

	return true;
}
void snt(int& n, int a[10])
{
	cout << endl;
	cout << "Cac so nguyen to co trong mang la: ";
	for (int i = 0; i < n; i++)
	{
		if (ktsnt(a[i]) == true)
		{
			cout << a[i] << " ";
		}
	}
}
//Viết hàm in ra vị trí của số nguyên tố có trong mảng.
void insnt(int& n, int a[10])
{
	cout << endl;
	cout << "Vi tri cac so nguyen to la: ";
	for (int i = 0; i < n; i++)
	{
		if (ktsnt(a[i]) == true)
		{
			cout << i << " ";
		}
	}
}
//Viết hàm tính trung bình cộng các số lẻ và là các số dương có trong mảng.
int tbcleduong(int& n, int a[10])
{
	cout << endl;
	cout << "Trung binh cong cac so le duong: ";
	float tong = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 1 && a[i] > 0)
		{
			dem++;
			tong += a[i];
		}
	}
	if (dem == 0) return dem;
	float tbc = tong / dem;
	return tbc;
}
//xuất đường chéo chính.
void cheochinh(int n1, int m, int b[3][3])
{
	cout << "\nDuong cheo chinh la:" << endl;
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)
			{
				cout << b[i][j] << " ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
}
//xuất đường chéo phụ.
void cheophu(int n1, int m, int b[3][3])
{
	cout << endl;
	cout << "Xuat duong cheo phu" << endl;
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i + j == m - 1)
			{
				cout << b[i][j] << " ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
}
//xuất tam giác trên chéo chính.
void tamgiactrenc9(int n1, int m, int b[3][3])
{
	cout << endl;
	cout << "Xuat tam giac tren duong cheo chinh" << endl;
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i <= j)

			{
				cout << b[i][j] << " ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
}
//Nhập xuất ma trận số thực.
//tính tổng đường chéo chính.
int tongc9(int n1, int m, int b[3][3])
{
	cout << endl;
	cout << "Tong duong cheo chinh: ";
	int tong = 0;
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)
			{
				tong += b[i][j];
			}
		}
	}
	return tong;
}
//tính tích đường chéo phụ.
int tichcheophu(int n1, int m, int b[3][3])
{
	cout << endl;
	cout << "Tích cheo phu: ";
	int tich = 1;
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i + j == m - 1)
			{
				tich *= b[i][j];
			}
		}
	}
	return tich;
}
//đếm số âm trên tam giác trên chéo chính.
void demsoamc9(int n1, int m, int b[3][3])
{
	cout << endl;
	int demam = 0;
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i <= j && b[i][j] < 0)
			{
				demam++;
			}
		}
	}
	cout << "Co " << demam << " so am tren tam giac cheo chinh";
}
//đếm số dương tam giác dưới đường chéo chính.
//tính trung bình các số số âm của tam giác dưới đường chéo phụ.
//tính trung bình các số âm của tam giác trên đường chéo phụ.
//Viết menu thực thi các hàm trên