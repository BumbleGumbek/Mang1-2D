#include "header.h"

int main()
{
	int n, a[10], chon;
	int n1 = 3;
	int m = 3;
	int b[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	do {
		cout << endl;
		cout << "\nLuu y: Muon menu tu 3-10 thuc thi can chon chuc nang so 1 truoc!!!";
		cout << "\n0. Thoat";
		cout << "\n1. Nhap mang 1 chieu";
		cout << "\n2. Xuat mang 1 chieu";
		cout << "\n3. Dem vi tri chan";
		cout << "\n4. Liet ke vi tri le";
		cout << "\n5. In ra so chinh phuong dau tien";
		cout << "\n6. Trung binh cong chan am";
		cout << "\n7. Kiem tra phai so am khong";
		cout << "\n8. In ra cac so nguyen to co trong mang";
		cout << "\n9. In ra cac vi tri co so nguyen to co trong mang";
		cout << "\n10. Trung binh cong cac so le duong";
		cout << "\n11. Xuat duong cheo phu";
		cout << "\n12. Xuat duong cheo phu";
		cout << "\n13. Xuat tam giac tren duong cheo chinh";
		cout << "\n14. Tong duong cheo chinh";
		cout << "\n15. Tich duong cheo phu";
		cout << "\n16. Dem so am trong tam giac tren duong cheo chinh";
		cout << "\n=> Vui long chon chuc nang: ";
		cin >> chon;
		if (chon == 0) break;
		switch (chon)
		{
		case 0:
			break;
		case 1:
			nhap(n, a);
			break;
		case 2:
			xuat(n, a);
			break;
		case 3:
			cout << "Co " << demchan(n, a) << " vi tri chan.";
			break;
		case 4:
			vitrile(n, a);
			break;
		case 5:
			scpdautien(n, a);
			break;
		case 6:
			cout << tbcchanam(n, a);
			break;
		case 7:
			cout << ktam(n, a);
			break;
		case 8:
			snt(n, a);
			break;
		case 9:
			insnt(n, a);
			break;
		case 10:
			cout << tbcleduong(n, a);
			break;
		case 11:
			cheochinh(n1, m, b);
			break;
		case 12:
			cheophu(n1, m, b);
			break;
		case 13:
			tamgiactrenc9(n1, m, b);
			break;
		case 14:
			cout << tongc9(n1, m, b);
			break;
		case 15:
			cout << tichcheophu(n1, m, b);
			break;
		case 16:
			demsoamc9(n1, m, b);
			break;
		default:
			cout << "\nNhap khonng hop le!";
			break;
		}
	} while (1);

	return 0;
}