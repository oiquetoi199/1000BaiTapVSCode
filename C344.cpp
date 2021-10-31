#include "nhapxuat.h"

void nhapMangTuDong(float a[][MAX], int row, int col)
{
    int dem = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j % 2 == 0)
                a[i][j] = dem - 1;
            else 

                a[i][j] = dem;

            dem++; 
        }        
    }  
}


void demGiaTriKhacNhau(float a[][MAX], int row, int col)
{
    int n = row * col;
    int dem = 0, flag;

    for (int i = 0; i < n; i++)
    {
        flag = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j / col][j % col] == a[i / col][i % col])
            {
                flag = 1;
                break;
            }
        }
        
        if (flag == 0)
        {
            dem++;
        }
        
    }
    
    
    cout << "So gia tri khac nhau suat hien trong mang la : " << dem << endl;
}

int main()
{
    float a[MAX][MAX];
    int col, row;
    row = col = 4;
    nhapMangTuDong(a, row, col);
    xuatMang(a, row, col);
    demGiaTriKhacNhau(a, row, col);
    return 0;
}