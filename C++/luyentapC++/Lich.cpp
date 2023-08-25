#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    cout << " ========== LICH ==========\n";
A:
    int ngay, thang, nam;
    do
    {
        cout << " Nhap ngay: ";
        cin >> ngay;
    } while (ngay < 1 || ngay > 31);
    do
    {
        cout << " Nhap thang: ";
        cin >> thang;
    } while (thang < 1 || thang > 12);
    do
    {
        cout << " Nhap nam: ";
        cin >> nam;
    } while (nam < 1960);
    if (nam % 4 == 0)
    {
        if (thang == 2)
        {
            if (ngay > 29)
            {
                cout << " Nam vua nhap la nam nhuan, nen thang 2 toi da la 29 ngay, hay nhap lai!\n";
                goto A;
            }
        }
        else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
            if (ngay > 30)
            {
                cout << " Thang " << thang << " co 30 ngay, hay nhap lai!\n";
                goto A;
            }
    }
    else if (nam % 4 != 0)
    {
        if (thang == 2)
        {
            if (ngay > 28)
            {
                cout << " Nam vua nhap ko phai nam nhuan, nen thang 2 toi da 28 ngay, hay nhap lai!\n";
                goto A; 
            }
        }
        else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
            if (ngay > 30)
            {
                cout << " Thang " << thang << " co 30 ngay, hay nhap lai!\n";
                goto A;
            }
    }
    int a = 5;
    for (int x = 1960; x <= nam; x++)
    {
        if (x == nam)
        {
            for (int y = 1; y <= thang; y++)
            {
                if (y == thang)
                {
                    for (int z = 1; z <= ngay; z++)
                    {
                        if (a == 8)
                            a = 1;
                        a++;
                    }
                }
                else
                {
                    if (x % 4 == 0)
                    {
                        if (y == 2)
                        {
                            for (int z = 1; z <= 29; z++)
                            {
                                if (a == 8)
                                    a = 1;
                                a++;
                            }
                        }
                        else if (y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12)
                        {
                            for (int z = 1; z <= 31; z++)
                            {
                                if (a == 8)
                                    a = 1;
                                a++;
                            }
                        }
                        else if (y == 4 || y == 6 || y == 9 || y == 11)
                        {
                            for (int z = 1; z <= 30; z++)
                            {
                                if (a == 8)
                                    a = 1;
                                a++;
                            }
                        }
                    }
                    else
                    {
                        if (y == 2)
                        {
                            for (int z = 1; z <= 28; z++)
                            {
                                if (a == 8)
                                    a = 1;
                                a++;
                            }
                        }
                        else if (y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12)
                        {
                            for (int z = 1; z <= 31; z++)
                            {
                                if (a == 8)
                                    a = 1;
                                a++;
                            }
                        }
                        else if (y == 4 || y == 6 || y == 9 || y == 11)
                        {
                            for (int z = 1; z <= 30; z++)
                            {
                                if (a == 8)
                                    a = 1;
                                a++;
                            }
                        }
                    }
                }
            }
        }
        else
        {
            if (x % 4 == 0)
            {
                for (int y = 1; y <= 12; y++)
                {
                    if (y == 2)
                    {
                        for (int z = 1; z <= 29; z++)
                        {
                            if (a == 8)
                                a = 1;
                            a++;
                        }
                    }
                    else if (y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12)
                    {
                        for (int z = 1; z <= 31; z++)
                        {
                            if (a == 8)
                                a = 1;
                            a++;
                        }
                    }
                    else if (y == 4 || y == 6 || y == 9 || y == 11)
                    {
                        for (int z = 1; z <= 30; z++)
                        {
                            if (a == 8)
                                a = 1;
                            a++;
                        }
                    }
                }
            }
            else
            {
                for (int y = 1; y <= 12; y++)
                {
                    if (y == 2)
                    {
                        for (int z = 1; z <= 28; z++)
                        {
                            if (a == 8)
                                a = 1;
                            a++;
                        }
                    }
                    else if (y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12)
                    {
                        for (int z = 1; z <= 31; z++)
                        {
                            if (a == 8)
                                a = 1;
                            a++;
                        }
                    }
                    else if (y == 4 || y == 6 || y == 9 || y == 11)
                    {
                        for (int z = 1; z <= 30; z++)
                        {
                            if (a == 8)
                                a = 1;
                            a++;
                        }
                    }
                }
            }
        }
    }
    if (ngay < 10 && thang < 10)
    {
        if (a == 8)
            cout << " Ngay 0" << ngay << " thang 0" << thang << " nam " << nam << " la vao Chu Nhat\n";
        else
            cout << " Ngay 0" << ngay << " thang 0" << thang << " nam " << nam << " la vao Thu " << a << "\n";
    }
    else if (ngay < 10 && thang >= 10)
    {
        if (a == 8)
            cout << " Ngay 0" << ngay << " thang " << thang << " nam " << nam << " la vao Chu Nhat\n";
        else
            cout << " Ngay 0" << ngay << " thang " << thang << " nam " << nam << " la vao Thu " << a << "\n";
    }
    else if (ngay >= 10 && thang < 10)
    {
        if (a == 8)
            cout << " Ngay " << ngay << " thang 0" << thang << " nam " << nam << " la vao Chu Nhat\n";
        else
            cout << " Ngay " << ngay << " thang 0" << thang << " nam " << nam << " la vao Thu " << a << "\n";
    }
    else
    {
        if (a == 8)
            cout << " Ngay " << ngay << " thang " << thang << " nam " << nam << " la vao Chu Nhat\n";
        else
            cout << " Ngay " << ngay << " thang " << thang << " nam " << nam << " la vao Thu " << a << "\n";
    }
    goto A;
}