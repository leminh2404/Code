//#include <graphics.h>
//#include <conio.h>
//
//const int gridSize = 20;
//const int width = 640;
//const int height = 480;
//
//struct SnakeSegment
//{
//    int x, y;
//};
//
//int main()
//{
//    int gd = DETECT, gm;
//    initgraph(&gd, &gm, "C:\\BGI");
//
//    int snakeLength = 1;
//    SnakeSegment snake[100];
//    snake[0].x = width / 2;
//    snake[0].y = height / 2;
//
//    int foodX = gridSize * (rand() % (width / gridSize));
//    int foodY = gridSize * (rand() % (height / gridSize));
//
//    char direction = 'd'; // Initial direction: right
//
//    while (1)
//    {
//        cleardevice();
//
//        // Vẽ thức ăn
//        setcolor(RED);
//        rectangle(foodX, foodY, foodX + gridSize, foodY + gridSize);
//        floodfill(foodX + 1, foodY + 1, RED);
//
//        // Vẽ và di chuyển rắn
//        for (int i = snakeLength - 1; i > 0; --i)
//        {
//            snake[i] = snake[i - 1];
//        }
//
//        switch (direction)
//        {
//            case 'w':
//                snake[0].y -= gridSize;
//                break;
//            case 's':
//                snake[0].y += gridSize;
//                break;
//            case 'a':
//                snake[0].x -= gridSize;
//                break;
//            case 'd':
//                snake[0].x += gridSize;
//                break;
//        }
//
//        // Kiểm tra va chạm với thức ăn
//        if (snake[0].x == foodX && snake[0].y == foodY)
//        {
//            snakeLength++;
//            foodX = gridSize * (rand() % (width / gridSize));
//            foodY = gridSize * (rand() % (height / gridSize));
//        }
//
//        // Vẽ rắn
//        for (int i = 0; i < snakeLength; ++i)
//        {
//            setcolor(GREEN);
//            rectangle(snake[i].x, snake[i].y, snake[i].x + gridSize, snake[i].y + gridSize);
//            floodfill(snake[i].x + 1, snake[i].y + 1, GREEN);
//        }
//
//        // Kiểm tra va chạm với tường hoặc chính nó
//        if (snake[0].x < 0 || snake[0].x >= width || snake[0].y < 0 || snake[0].y >= height)
//        {
//            closegraph();
//            return 0;
//        }
//
//        for (int i = 1; i < snakeLength; ++i)
//        {
//            if (snake[0].x == snake[i].x && snake[0].y == snake[i].y)
//            {
//                closegraph();
//                return 0;
//            }
//        }
//
//        delay(100); // Điều chỉnh tốc độ
//        if (kbhit())
//        {
//            char newDir = getch();
//            if ((newDir == 'w' && direction != 's') ||
//                (newDir == 's' && direction != 'w') ||
//                (newDir == 'a' && direction != 'd') ||
//                (newDir == 'd' && direction != 'a'))
//            {
//                direction = newDir;
//            }
//        }
//    }
//
//    closegraph();
//    return 0;
//}