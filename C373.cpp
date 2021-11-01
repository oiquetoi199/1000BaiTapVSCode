#include "nhapxuat.h"

void nhoNhatTrenCot(float a[][MAX], int row, int col)
{
    int vtCol;
    nhapCot:
    cout << "Nhap vao cot can tim : ";
    cin >> vtCol;
    if (vtCol >= col)
    {
        cout << "Khong hop le !!!" << endl;
        system ("pause");    
        system ("cls");
        goto nhapCot;
    }
   
    // tim gia tri nho nhat tren cot da nhap
    int temp = a[0][vtCol];
    for (int i = 0; i < col; i++)
    {
        if (temp > a[i][vtCol])
            temp = a[i][vtCol];
    }
    cout << "Gia tri nho nhat trong dong thu " << vtCol << " la : " << temp << endl;
    
}

int main()
{
    float a[MAX][MAX];
    int row, col;
    row = col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    nhoNhatTrenCot(a, row, col);
    return 0;
}
