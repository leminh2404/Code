#include "iostream"
#include "cstdlib"
#include "string"
#include "sstream"
#include "utility"
#include "iomanip"
using namespace std;
int main()
{
    // Ngay: Thuong = 1, thu bay = 2, chu nhat = 3, le = 4
    // Mua: Xuan = 1, Ha = 2, Thu = 3, Dong = 4
    // Gio: Khong = 1, Vua = 2, Lon = 3
    // Mua: Khong = 1, Phun = 2, Nang hat = 3
    // Lop: Huy = 1, Rat tre = 2, Tre = 3, Dung gio = 4
    string input =
        "thuong xuan khonggio khongmua dunggio thuong dong khonggio phun dunggio thuong dong khonggio phun dunggio thuong dong lon nanghat tre thubay ha vua khongmua dunggio thuong thu vua khongmua rattre le ha lon phun dunggio chunhat ha vua khongmua dunggio thuong dong lon nanghat rattre thuong ha khonggio phun dunggio thubay xuan lon nanghat huy thuong ha lon phun dunggio thubay dong vua khongmua tre thuong ha lon khongmua dunggio thuong dong vua nanghat rattre thubay thu lon phun dunggio thuong thu khonggio nanghat dunggio le xuan vua phun dunggio thuong xuan vua khongmua dunggio thuong xuan vua phun dunggio";
    istringstream stream(input);
    int **a = new int *[21];
    for (int i = 0 ; i < 21; i++)
        a[i] = new int [6];
    float LOP[5] = {0, 0, 0, 0, 0}; // luu so lop rieng biet cua moi lop
    float TOTALLOP[5] = {0, 0, 0, 0, 0}; // luu so lop / tong so lop
    float PDAY[5] = {0, 0, 0, 0, 0}; // luu theo LOP tuong ung voi cot Ngay
    float PSEASON[5] = {0, 0, 0, 0, 0};
    float PWINDY[5] = {0, 0, 0, 0, 0};
    float PRAIN[5] = {0, 0, 0, 0, 0};
    float PRESLOP[5] = {0, 0, 0, 0, 0}; // luu gia tri cua P(Result | 1), ... voi 1 la Huy, 2 la Rat tre, ...
    float PLOPRES[5] = {0, 0, 0, 0, 0}; // luu gia tri cua P(1 | Result), ... voi 1 la Huy, 2 la Rat tre, ...
    cout << "Nhap ma tran cho bo test: \n";
    for (int i = 1; i < 21; i++)
        for (int j = 1; j < 6; j++)
        {
            string s;
            stream >> s;
            cout << "Nhap hang " << i << " cot " << j << ": ";
            if (s == "thuong")
                a[i][1] = 1;
            else if (s == "thubay")
                a[i][1] = 2;
            else if (s == "chunhat")
                a[i][1] = 3;
            else if (s == "le")
                a[i][1] = 4;
            else if (s == "xuan")
                a[i][2] = 1;
            else if (s == "ha")
                a[i][2] = 2;
            else if (s == "thu")
                a[i][2] = 3;
            else if (s == "dong")
                a[i][2] = 4;
            else if (s == "khonggio")
                a[i][3] = 1;
            else if (s == "vua")
                a[i][3] = 2;
            else if (s == "lon")
                a[i][3] = 3;
            else if (s == "khongmua")
                a[i][4] = 1;
            else if (s == "phun")
                a[i][4] = 2;
            else if (s == "nanghat")
                a[i][4] = 3;
            else if (s == "huy")
                a[i][5] = 1;
            else if (s == "rattre")
                a[i][5] = 2;
            else if (s == "tre")
                a[i][5] = 3;
            else if (s == "dunggio")
                a[i][5] = 4;
            if (a[i][5] == 1)
                LOP[1]++; // Huy
            else if (a[i][5] == 2)
                LOP[2]++; // Tre
            else if (a[i][5] == 3)
                LOP[3]++; // Rat tre
            else if (a[i][5] == 4)
                LOP[4]++; // Dung gio
        }
    TOTALLOP[1] = LOP[1] / 20;
    TOTALLOP[2] = LOP[2] / 20;
    TOTALLOP[3] = LOP[3] / 20;
    TOTALLOP[4] = LOP[4] / 20;
    cout << "\nMa tran vua nhap: \n";
    for (int i = 1; i < 21; i++)
    {
        for (int j = 1; j < 6; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
    cout << "So luong tren tong: " << TOTALLOP[1] << " " << TOTALLOP[2] << " " << TOTALLOP[3] << " " << TOTALLOP[4] << endl;
    int DAY, SEASON, WINDY, RAIN;
    cout << "*===Nhap thong tin cho ngay can tim LOP===*\n";
Nhapngay:
    string s;
    cout << "Nhap ngay: ";
    cin >> s;
    if (s == "thuong")
        DAY = 1;
    else if (s == "thubay")
        DAY = 2;
    else if (s == "chunhat")
        DAY = 3;
    else if (s == "le")
        DAY = 4;
    else
        goto Nhapngay;
Nhapmua:
    cout << "Nhap mua: ";
    cin >> s;
    if (s == "xuan")
        SEASON = 1;
    else if (s == "ha")
        SEASON = 2;
    else if (s == "thu")
        SEASON = 3;
    else if (s == "dong")
        SEASON = 4;
    else
        goto Nhapmua;
Nhapgio:
    cout << "Nhap gio: ";
    cin >> s;
    if (s == "khonggio")
        WINDY = 1;
    else if (s == "vua")
        WINDY = 2;
    else if (s == "lon")
        WINDY = 3;
    else
        goto Nhapgio;
Nhapthoitietmua:
    cout << "Nhap mua nhu the nao: ";
    cin >> s;
    if (s == "khongmua")
        RAIN = 1;
    else if (s == "phun")
        RAIN = 2;
    else if (s == "nanghat")
        RAIN = 3;
    else
        goto Nhapthoitietmua;
    for (int i = 1; i < 21; i++)
    {
        if (a[i][1] == DAY)
            PDAY[a[i][5]] = (PDAY[a[i][5]] + 1) / LOP[a[i][5]];
        if (a[i][2] == SEASON)
            PSEASON[a[i][5]] = (PSEASON[a[i][5]] + 1) / LOP[a[i][5]];
        if (a[i][3] == WINDY)
            PWINDY[a[i][5]] = (PWINDY[a[i][5]] + 1) / LOP[a[i][5]];
        if (a[i][4] == RAIN)
            PRAIN[a[i][5]] = (PRAIN[a[i][5]] + 1) / LOP[a[i][5]];
    }
    PRESLOP[1] = PDAY[1] * PSEASON[1] * PWINDY[1] * PRAIN[1]; // Huy
    PRESLOP[2] = PDAY[2] * PSEASON[2] * PWINDY[2] * PRAIN[2]; // Rat tre
    PRESLOP[3] = PDAY[3] * PSEASON[3] * PWINDY[3] * PRAIN[3]; // Tre
    PRESLOP[4] = PDAY[4] * PSEASON[4] * PWINDY[4] * PRAIN[4]; // Dung gio
    PLOPRES[1] = TOTALLOP[1] * PRESLOP[1];
    PLOPRES[2] = TOTALLOP[2] * PRESLOP[2];
    PLOPRES[3] = TOTALLOP[3] * PRESLOP[3];
    PLOPRES[4] = TOTALLOP[4] * PRESLOP[4];
    cout << PLOPRES[1] << " " << PLOPRES[2] << " " << PLOPRES[3] << " " << fixed << setprecision(5) << PLOPRES[4] << endl;
    int max = INT_MIN, index = 0;
    for (int i = 1; i < 5; i++)
        if (PLOPRES[i] > max)
        {
            max = PLOPRES[i];
            index = i;
        }
    pair<int, string> RES[4] = {{make_pair(1, "Huy")}, {make_pair(2, "Rat tre")}, {make_pair(3, "Tre")}, {make_pair(4, "Dung gio")}};
    cout << RES[index - 1].second;
    for (int i = 0; i < 21; i++)
        delete[] a[i];
    delete[] a;
    return 0;
}