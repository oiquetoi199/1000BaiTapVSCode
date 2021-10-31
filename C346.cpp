#include "nhapxuat.h"

void nhapTuDong(int a[][MAX], int row, int col)
{
    cout << "Nhap cac phan tu cua mang : \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
        
    }
    
}

bool kiemTraHoangHau(int a[][MAX], int row, int col, int vtRow, int vtCol)
{
    // duyet hang
    for (int i = 0; i < row; i++)
    {
        if (a[vtRow][vtCol] < a[i][vtCol] && i != vtRow)
            return 0;
    }

    // duyet cot
    for (int i = 0; i < col; i++)
    {
        if (a[vtRow][vtCol] < a[vtRow][i] && i != vtCol)
        {
           return 0;
        }
    }
    
    // duyet hang cheo
    // chia 4 truong hop

    int vtRow1 = vtRow - 1;
    int vtCol1 = vtCol - 1;
    while (vtRow1 >= 0 && vtCol1 >= 0) // duyet tren trai
    {
        if (a[vtRow][vtCol] < a[vtRow1][vtCol1])
        {
            return 0;
        }
        vtCol1--;
        vtRow1--;
    } 

    vtRow1 = vtRow + 1;
    vtCol1 = vtCol + 1;
    while (vtRow1 < row && vtCol1 < col) // duyet duoi phai
    {
        // dung && vi bat buoc ca 2 khong duoc tien ra ngoai mang
        if (a[vtRow][vtCol] < a[vtRow1][vtCol1])
        {
            return 0;
        }
        vtCol1++;
        vtRow1++;
    }
    
    vtRow1 = vtRow - 1;
    vtCol1 = vtCol + 1;
    while (vtRow1 >= 0 && vtCol1 < col) // duyet tren phai
    {
        if (a[vtRow][vtCol] < a[vtRow1][vtCol1])
        {
            return 0;
        }
        vtRow1--;
        vtCol1++;
        
    }

    vtRow1 = vtRow + 1;
    vtCol1 = vtCol - 1;
    while(vtRow1 < row && vtCol1 >= 0) // duyet duoi trai
    {
        if (a[vtRow][vtCol] < a[vtRow1][vtCol1])
        {
            return 0;
        }
        vtRow1++;
        vtCol1--;
    } 
    return 1;
    
}

void giaTriHoangHau(int a[][MAX], int row, int col)
{
    int dem = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (kiemTraHoangHau(a, row, col, i, j) == 1)
            {
                dem++;
                cout << a[i][j] << endl;
            }
        }
    }
    cout << "So luong gia tri hoang hau la : " << dem << endl;
}

int main()
{
    int a[MAX][MAX];
    int row, col;
    row = col = 3;
    nhapTuDong(a, row, col);
    xuatMang(a, row, col);
    giaTriHoangHau(a, row, col);


    return 0;
}