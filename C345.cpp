#include "nhapxuat.h"

void nhapMangTuDong(float a[][MAX], int row, int col)
{
    int dem = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            a[i][j] = dem;
            dem++; 
        }
         
    }
     
}

bool ktCucTri(float a[][MAX], int row, int col, int vtRow, int vtCol)
{
    int flagMax = 1;
    int flagMin = 1;

    if (vtRow != 0 && vtRow != row - 1 && vtCol != 0 && vtCol != col - 1)
    {
        for (int i = -1; i <= 1; i++)
        {
            for (int j = -1; j <= -1; j++)
            {
                if (i == 0 && j == 0)
                    continue;
                if (a[vtRow + i][vtCol + j] >= a[vtRow][vtCol])
                    flagMax = 0;
                if (a[vtRow + i][vtCol + j] <= a[vtRow][vtCol])
                    flagMin = 0;
            }
        }
    }

    if (vtRow == 0)
    {
        if (vtCol == 0)
        {
            for (int i = 0; i <= 1; i++)
            {
                for (int j = 0; j <= 1; j++)
                {
                    if (i == 0 && j == 0)
                        continue;
                    if (a[vtRow + i][vtCol + j] >= a[vtRow][vtCol])
                        flagMax = 0;
                    if (a[vtRow + i][vtCol + j] <= a[vtRow][vtCol])
                        flagMin = 0;
                }                
            }            
        }
        else if (vtCol == col - 1)
        {
            for (int i = 0; i <= 1; i++)
            {
                for (int j = -1; j <= 0; j++)
                {
                    if (i == 0 && j == 0)
                        continue;
                    if (a[vtRow + i][vtCol + j] >= a[vtRow][vtCol])
                        flagMax = 0;
                    if (a[vtRow + i][vtCol + j] <= a[vtRow][vtCol])
                        flagMin = 0;
                }                
            }            
        }
        else
        {
            for (int i = 0; i <= 1; i++)
            {
                for (int j = -1; j <= 0; j++)
                {
                    if (i == 0 && j == 0)
                        continue;
                    if (a[vtRow + i][vtCol + j] >= a[vtRow][vtCol])
                        flagMax = 0;
                    if (a[vtRow + i][vtCol + j] <= a[vtRow][vtCol])
                        flagMin = 0;
                }                
            }            
        }
    }
    
    if (vtRow == row - 1)
    {
        if (vtCol == 0)
        {
            for (int i = -1; i <= 0; i++)
            {
                for (int j = 0; j <= 1; j++)
                {
                    if (i == 0 && j == 0)
                        continue;
                    if (a[vtRow + i][vtCol + j] >= a[vtRow][vtCol])
                        flagMax = 0;
                    if (a[vtRow + i][vtCol + j] <= a[vtRow][vtCol])
                        flagMin = 0;
                }                
            }            
        }
        else if (vtCol == col - 1)
        {
            for (int i = -1; i <= 0; i++)
            {
                for (int j = -1; j <= 0; j++)
                {
                    if (i == 0 && j == 0)
                        continue;
                    if (a[vtRow + i][vtCol + j] >= a[vtRow][vtCol])
                        flagMax = 0;
                    if (a[vtRow + i][vtCol + j] <= a[vtRow][vtCol])
                        flagMin = 0;
                }                
            }            
        }
        else
        {
            for (int i = -1; i <= 0; i++)
            {
                for (int j = -1; j <= 1; j++)
                {
                    if (i == 0 && j == 0)
                        continue;
                    if (a[vtRow + i][vtCol + j] >= a[vtRow][vtCol])
                        flagMax = 0;
                    if (a[vtRow + i][vtCol + j] <= a[vtRow][vtCol])
                        flagMin = 0;
                }                
            }            

        }
    }
    
    if (vtCol == 0 && vtRow != 0 && vtRow != row - 1)
    {
        for (int i = -1; i <= 1; i++)
        {
            for (int j = 0; j <= 1; j++)
            {
                if (i == 0 && j == 0)
                    continue;
                if (a[vtRow + i][vtCol + j] >= a[vtRow][vtCol])
                    flagMax = 0;
                if (a[vtRow + i][vtCol + j] <= a[vtRow][vtCol])
                    flagMin = 0;
            }                
        }            
    }

    if (vtCol == col -1 && vtRow != 0 && vtRow != row -1)
    {
        for (int i = -1; i <= 1; i++)
        {
            for (int j = -1; j <=  0; j++)
            {
                if (i == 0 && j == 0)
                    continue;
                if (a[vtRow + i][vtCol + j] >= a[vtRow][vtCol])
                    flagMax = 0;
                if (a[vtRow + i][vtCol + j] <= a[vtRow][vtCol])
                    flagMin = 0;
            }                
        }            
    }

    
    if (flagMax == 1)
        return 1;
    if (flagMin == 1)
        return 1;
    return 0;
}

void tongCucTri(float a[][MAX], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (ktCucTri(a, row, col, i, j) == 1)
            {
                cout << a[i][j] << endl;
                sum += a[i][j];
            }
        }
        
    }
    cout << "Tong cac cuc tri trong mang la : " << sum << endl;
}

int main()
{
    float a[MAX][MAX];
    int row, col;
    row = col = 5;
    nhapMangTuDong(a, row, col);
    xuatMang(a, row, col);
    tongCucTri(a, row, col);
    return 0;
}