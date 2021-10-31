#include "nhapxuat.h"
#include <cmath>

void nhapTuDong(int a[][MAX], int row, int col)
{
    int dem = 9;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            a[i][j] = dem--;
        }
        
    }
    
}

// 348
void kiemTraDuong(int a[][MAX], int row, int col)
{
    cout << "C348 : ";
    int flag = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] > 0)
            {
                flag = 1;
            }
        }
        
    }
    if (flag ==1)
        cout << "Ma tran co ton tai so duong" << endl;
    else
        cout << "Ma tran khong ton tai so duong" << endl;
    
}

// 349
bool ktHoanThien(int n)
{

    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
        return 1;
    return 0;
} 

void tonTaiHoanThien(int a[][MAX], int row, int col)
{   
    cout << "C349 : ";
    int flag = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (ktHoanThien(a[i][j]) == 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }

    if (flag == 1)
        cout << "Ma tran ton tai so hoan thien" << endl;
    else   
        cout << "Ma tran khong ton tai so hoan thien" << endl;
}

// C350
void tonTaiSoLe(int a[][MAX], int row, int col)
{
    cout << "C350 : ";    
    int flag = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
    {
        cout << "Co ton tai so le trong mang\n";
    }
    else
    {
        cout << "Khong ton tai so le trong mang\n";
    }
}

// c351
void kiemTraToanDuong(int a[][MAX], int row, int col)
{
    cout << "C351 : ";
    int flag = 1;
    int n = row * col;
    for (int i = 0; i < n; i++)
    {
        if (a[i/col][i%col] < 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1) 
        cout << "Mang ton tai toan so duong\n";
    else
        cout << "Mang khong toan so duong\n";

}

// c352
void kiemTraHangTang(int a[][MAX], int row, int col)
{
    cout << "C352\n";
    int x, flag = 1;
    cout << "Nhap hang can kiem tra :";
    cin >> x;
    
    for (int i = 1; i < col; i++)
    {
        if (a[x][i] < a[x][i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        cout << "Hang thu (" << x << ") luon tang\n";
    else
        cout << "Hang thu (" << x << ") khong luon tang\n";
}

// c353
void kiemTraCotTang(int a[][MAX], int row, int col)
{
    cout << "C353\n";
    int x, flag = 1;
    cout << "Nhap cot can kiem tra :";
    cin >> x;
    
    for (int i = 1; i < row; i++)
    {
        if (a[i][x] < a[i - 1][x])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        cout << "Cot thu (" << x << ") luon tang\n";
    else
        cout << "Cot thu (" << x << ") khong luon tang\n";
}

// C354
void kiemTraGiamDan(int a[][MAX], int row, int col)
{
    cout << "C354\n";
    int n[row*col];
    int k = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            n[k] = a[i][j];
            k++;
        }        
    }
    
    int flag = 1;
    for (int i = 0; i < k; i++)
    {
        if (n[i] < n[i + 1])
        {
            flag = 0;
            break;
        }
    }
    
    if (flag == 1)
        cout << "Ma tran giam dan theo hang va theo cot\n";
    else
        cout << "Ma tran khong giam dan theo hang va cot\n";
}

// C355

bool ktDongAm(int a[][MAX], int vtRow, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (a[vtRow][i] >= 0)
            return 0;
    }
    return 1;
    
}

void lietKeDongToanAm (int a[][MAX], int row, int col)
{
    cout << "C355 :";
    cout << "Cac dong toan am la : ";
    for (int i = 0; i < row; i++)
    {
        if (ktDongAm(a, i, col) == 1)
            cout << i << " ";
    }
    cout << endl;
}

// C356
bool ktDongChan(int a[][MAX], int vtRow, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (a[vtRow][i] %2 != 0)
        {
            return 0;
        }
    }
    return 1;
        
}

void lietKeDongToanChan(int a[][MAX], int row, int col)
{
    cout << "C356 :";
    cout << "Cac dong toan chan la : ";
    for (int i = 0; i < col; i++)
    {
        if (ktDongChan(a, i, row) == 1)
            cout << i << " ";
    }
    cout << endl;    
}

// C357
bool ktNguyenTo(int n)
{
    if (n == 0 || n == 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
    
}

bool ktDongNguyenTo(int a[][MAX], int vtRow, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (ktNguyenTo(a[vtRow][i]) == 1)
            return 1;
    }
    return 0;
}

void lietKeDongNguyenTo(int a[][MAX], int row, int col)
{
    cout << "C357 :";
    cout << "Cac dong chua so nguyen to la :";
    for (int i = 0; i < row; i++)
    {
        if (ktDongNguyenTo(a, i, col) == 1)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

// C358
void lietKeDongChuaChan(int a[][MAX], int row, int col)
{
    cout << "C358 : ";
    cout << "Cac dong chua gia tri chan la : ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                cout << i << " ";
                break;
            }
        }
    }
    cout << endl;
}

// C359
void lietKeDongChuaAm(int a[][MAX], int row, int col)
{
    cout << "C359 : ";
    cout << "Cac dong chua gia tri am la : ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] < 0)
            {
                cout << i << " ";
                break;
            }
        }
    }
    cout << endl;
}

// C360
bool ktChinhPhuong(int a)
{
    for (int i = 0; i * i <= a; i++)
    {
        if (i * i == a)
        {
            return 1;
        }
    }
    return 0;
    
}
void lietKeCotChinhPhuong(int a[][MAX], int row, int col)
{
    cout << "C360 : ";
    cout << "Cot chua so chinh phuong la : ";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (ktChinhPhuong(a[j][i]))
            {
                cout << i << " ";
                break;
            }
        }
    }
    cout << endl;
}

// C361
void lietKeDongDK(int a[][MAX], int row, int col)
{
    cout << "C361 : ";
    cout << "Cac dong co cac gia tri thoa man dieu kien la : ";
    int flag;
    for (int i = 0; i < row; i++)
    {
        int flag[3] = {0}; // tao mang chua 3 phan tu
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] < 0)
                flag[0] = 1;
            if (a[i][j] == 0)
                flag[1] = 1;
            if (a[i][j] > 0)
                flag[2] = 1;
        }
        if (flag[0] + flag[1] + flag[2] == 3)
            cout << i << " ";
        
    }
    cout << endl;
}

// C362
void lietKeDongGiamDan(int a[][MAX], int row, int col)
{
    cout << "C362 : ";
    cout << "Cac dong giam dan trong mang la : ";
    int flag;
    for (int i = 0; i < row; i++)
    {
        flag = 1;
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] < a[i][j + 1])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << i << " ";
    }
    cout << endl;
}

// C363
void lietKeCotTangDan(int a[][MAX], int row, int col)
{
    cout << "C363 : ";
    cout << "Cac cot tang dan trong mang la : ";
    int flag;
    for (int i = 0; i < col; i++)
    {
        flag = 1;
        for (int j = 1; j < row; j++)
        {
            if (a[j][i] < a[j - 1][i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << i << " ";
    }
    cout << endl;
}



int main()
{
    int a[MAX][MAX];
    int row, col;
    row = col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    kiemTraDuong(a, row, col);
    tonTaiHoanThien(a, row, col);
    tonTaiSoLe(a, row, col);
    kiemTraToanDuong(a, row, col);
    kiemTraHangTang(a, row, col);
    kiemTraCotTang(a, row, col);
    kiemTraGiamDan(a, row, col);
    lietKeDongToanAm(a, row, col);
    lietKeDongToanChan(a, row, col);
    lietKeDongNguyenTo(a, row, col);
    lietKeDongChuaChan(a, row, col);
    lietKeDongChuaAm(a, row, col);
    lietKeCotChinhPhuong(a, row, col);
    lietKeDongDK(a, row, col);
    lietKeDongGiamDan(a, row, col);
    lietKeCotTangDan(a, row, col);

    return 0;

}