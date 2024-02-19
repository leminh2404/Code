#include <graphics.h>
#include <conio.h>
#include <cmath>

void drawEquilateralTriangle(int x, int y, int sideLength)
{
    int height = static_cast<int>(sideLength * sqrt(3) / 2);

    line(x, y, x + sideLength, y);  // Bottom side
    line(x, y, x + sideLength / 2, y - height);  // Left side
    line(x + sideLength / 2, y - height, x + sideLength, y);  // Right side
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\BGI");

    int x, y, sideLength;

    // Nh?p v? trí và chi?u dài c?nh t? ngu?i dùng
    printf("Nhap toa do (x, y) cua tam giac deu: ");
    scanf("%d %d", &x, &y);
    printf("Nhap do dai canh cua tam giac deu: ");
    scanf("%d", &sideLength);

    // V? tam giác d?u
    drawEquilateralTriangle(x, y, sideLength);

    getch();
    closegraph();

    return 0;
}
