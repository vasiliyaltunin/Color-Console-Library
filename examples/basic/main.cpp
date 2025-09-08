/**
 * @file main.cpp
 * @author Василий Алтунин (skyr@altuninvv.ru)
 * @brief Файл содержит пример использования класса  ColorConsole
 * @version 0.1.0
 * @date 2025-09-05
 *
 * @copyright Алтунин Василий 2025
 *
 * Выводит в консоль строку ColorConsole каждая буква которой,
 * выделена случайным цветом текста и фона
 *
 */

#include <iostream>
#include <string>
#include <random>

#include "../../include/colorconsole/colorconsole.h"

using ccon::ColorConsole;

int main(int argc, char *argv[])
{
    ColorConsole::init(); // Инициализация

    // Настраиваем генератор случайных чисел
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, 15);

    std::string str = "ColorConsole";

    // В цикле выводим каждую букву
    for (int i = 0; i <= str.length() - 1; i++)
    {
       //Устанавливаем случайный цвет текста и фона
        ColorConsole::setConsStdOutColor(distr(gen), distr(gen));
       
        std::cout << str[i];
    }

    //Возвращаем настройки текста по умолчанию
    ColorConsole::setConsStdOutDefColor();

    return 0;
}