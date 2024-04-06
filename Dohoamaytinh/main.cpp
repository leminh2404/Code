#include <graphics.h>
#include <conio.h>
#include <cmath>

void drawEquilateralTriangle(int x, int y, int sideLength)
{
    int height = static_cast<int>(sideLength * sqrt(3) / 2);

    setlinestyle(SOLID_LINE, 0, 5);
    setcolor(MAGENTA);
    line(x, y, x + sideLength, y);
    line(x, y, x + sideLength / 2, y - height);
    line(x + sideLength / 2, y - height, x + sideLength, y);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\BGI");

    int x, y, sideLength;

    printf("Nhap toa do (x, y) cua tam giac deu: ");
    scanf("%d %d", &x, &y);
    printf("Nhap do dai canh cua tam giac deu: ");
    scanf("%d", &sideLength);

    drawEquilateralTriangle(x, y, sideLength);

    getch();
    closegraph();

    return 0;
}