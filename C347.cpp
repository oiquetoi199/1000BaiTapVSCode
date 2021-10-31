#include "nhapxuat.h"

void nhapTuDong(int a[][MAX], int row, int col)
{
    int dem = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            a[i][j] = dem++;
        }
        
    }
    
}

bool kiemTeaYenNgua(int a[][MAX], int row, int col, int vtRow, int vtCol)
{
    for (int i = 0; i < col; i++) // lon nhat trong dong
    {
        if (a[vtRow][vtCol] <= a[vtRow][i] && i != vtCol)
        {
            return 0;
        }
    }
     
   for (int i = 0; i < row; i++)
    {
      if (a[vtRow][vtCol] >= a[i][vtCol] && i != vtRow)
      {
          return 0;
       }
    }

    return 1; 
}

void demYenNgua(int a[][MAX], int row, int col)
{
    int dem = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j  < col; j++)
        {
            if (kiemTeaYenNgua(a, row, col, i, j) == 1)
            {
                dem++;
                cout << a[i][j] << " ";
            }
        }
    }
    cout << "So gia tri yen ngua xuat hien trong mang la : " << dem;
    cout << endl;
}

int main()
{
    int a[MAX][MAX];
    int row, col;
    row = col = 4;
    nhapTuDong(a, row, col);
    xuatMang(a, row, col);
    demYenNgua(a, row, col);
    return 0;
}