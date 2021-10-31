#include "nhapxuat.h"

bool kiemTraCucDai(int a[][MAX + 2], int vtrow, int vtcol)
{
    bool flag = 1;
    for (int i = -1; i <= 1; i++)
    {
        for (int j = -1; j <= 1; j++)
        {
            if (i == 0 && j == 0)
                continue;
            if (a[vtrow][vtcol] <= a[vtrow + i][vtcol + j])
                flag = 0;
        }
    }
    return flag; 
}

int timMin(int a[][MAX], int row, int col)
{
    int min = a[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        } 
    }
    return min;
}



void lietKeCucDai(int a[][MAX], int row, int col)
{
    // tim min
    int min = timMin(a, row, col);
    // tao ma tran b lon hon a 2 cap (row + 2, col + 2)
    
    int b[MAX + 2][MAX + 2];
    for (int i = 0; i < row + 2; i++)
    {
        for (int j = 0; j <= col + 2; j++)
        {
            if ((i == 0 || i == row + 1) || (j == 0 || j == col + 1))
                b[i][j] = min;
            else
                b[i][j] = a[i-1][j-1];
        }    
    }
    

    cout << "Cac gia tri cuc dai trong mang la : ";
    for (int i = 1; i < row + 1; i++)
    {
        for (int j = 1; j < col + 1; j++)
        {
            if (kiemTraCucDai(b, i, j) == 1)
            {
                cout << b[i][j] << " ";
            }
        }   
    }   
    cout << endl;
}

int main()
{
    int a[MAX][MAX];
    int row = 4, col = 4;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    lietKeCucDai(a, row, col);
    return 0;
}