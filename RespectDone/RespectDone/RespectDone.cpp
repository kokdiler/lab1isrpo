// RespectDone.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

bool respect;

int main()
{
    setlocale(LC_ALL,"Russian");

    int a = 0;

    std::cout << "Дон, сколько раз муньку делал,Дон";
    std::cout << "\n";
    
    std::cin >> a;
    std::cout << "\n";
    if (a == 0)
        respect = true;
    else
        respect = false;

    

    if (respect == false)
    {
        std::cout << "Извинись Дон, где твое уважение";
        respect = true;
    }
    else
        std::cout << "Ладно дон, прощаю , нормальны ты парень Иншала";

}
