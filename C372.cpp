#include "nhapxuat.h"

void lonNhatTrenDong(float a[][MAX], int row, int col)
{
    int vtRow;
    nhapDong:
    cout << "Nhap vao dong can tim : ";
    cin >> vtRow;
    if (vtRow >= row)
    {
        cout << "Khong hop le !!!" << endl;
        system ("pause");    
        system ("cls");
        goto nhapDong;
    }
   
    // tim gia tri nho nhat tren dong da nhap
    int temp = a[vtRow][0];
    for (int i = 0; i < col; i++)
    {
        if (temp < a[vtRow][i])
            temp = a[vtRow][i];
    }
    cout << "Gia tri lon nhat trong dong thu " << vtRow << " la : " << temp << endl;
    
}

int main()
{
    float a[MAX][MAX];
    int row, col;
    row = col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    lonNhatTrenDong (a, row, col);
    return 0;
}