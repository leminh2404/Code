#include <iostream>
#include <windows.h> // Để sử dụng hàm Sleep
using namespace std;

const int mazeRows = 9;
const int mazeColumns = 9;
char maze[mazeRows][mazeColumns + 1] = {
    "O OOOOOOO",
    "O   O   O",
    "O OOO O O",
    "O O   O O",
    "O O O O O",
    "O     O O",
    "O OOO O O",
    "O   O O O",
    "OOOOOOO O",
};
const char wall = 'O';
const char freeSpace = ' ';
const char someDude = '*';

class MazeCOORD
{
public:
    int x;
    int y;
    MazeCOORD(int _x = 0, int _y = 0) { x = _x, y = _y; }
    MazeCOORD(const MazeCOORD &coord) { x = coord.x; y = coord.y; }
};

MazeCOORD startingPoint(1, 0);
MazeCOORD endingPoint(7, 8);

void setConsoleColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void printDaMaze() {
    for (int Y = 0; Y < mazeRows; Y++) {
        cout << maze[Y] << endl;
    }
    cout << endl;
}

char get(int x, int y) {
    if (x < 0 || x >= mazeColumns || y < 0 || y >= mazeRows) return wall;
    return maze[y][x];
}

void set(int x, int y, char ch) {
    if (x < 0 || x >= mazeColumns || y < 0 || y >= mazeRows) return;
    maze[y][x] = ch;
}

bool solve(int x, int y) {
	// Thực hiện di chuyển (nếu sai chúng ta sẽ quay lại sau).
    system("cls");
    set(x, y, someDude);
    printDaMaze();
    Sleep(50);
    // Kiểm tra xem đã đến đích chưa
    if (x == endingPoint.x && y == endingPoint.y) return true;
    // Đệ quy tìm kiếm đích
    if (get(x - 1, y) == freeSpace && solve(x - 1, y)) return true;
    if (get(x + 1, y) == freeSpace && solve(x + 1, y)) return true;
    if (get(x, y - 1) == freeSpace && solve(x, y - 1)) return true;
    if (get(x, y + 1) == freeSpace && solve(x, y + 1)) return true;
    // Nếu không thấy chúng ta cần quay lại và tìm kiếm giải pháp khác
    system("cls");
    set(x, y, freeSpace);
    printDaMaze();
    Sleep(50);
    return false;
}

int main(int argc, char* argv[]) {
    if (solve(startingPoint.x, startingPoint.y)) {
        printDaMaze();
        cout << "Me cung duoc giai quyet!\n";
    } else {
        cout << "Me cung khong the giai quyet!\n";
    }
    return 0;
}