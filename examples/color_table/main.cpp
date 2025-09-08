/**
 * @file main.cpp
 * @author Василий Алтунин (skyr@altuninvv.ru)
 * @brief Файл содержит пример использования класса ColorConsole
 * @version 0.1.0
 * @date 2025-09-05
 *
 * @copyright Алтунин Василий 2025
 *
 * Выводит в консоль таблицу из всех поддерживаемых цветов 
 * текста и фона 
 *
 */

#include <iostream>

#include "../../include/colorconsole/colorconsole.h"

using ccon::ColorConsole;

int main(int argc, char *argv[])
{
    ColorConsole::init();  // Инициализация

    ColorConsole::emptyLine();  // Новая строка  цветом фона консоли

    for (int i = 0; i < 256; i++) // В цикле проходим по всем 256 цветам

    {
        if ((i % 16 == 0) && (i != 0)) { // После каждого 16 столбца новая строка

            ColorConsole::emptyLine();
        }

        ColorConsole::setConsStdOutColor(i); //Устанавливаем цвет
       
        printf("[%03d]",i); // Выводим номер цвета
    }

    ColorConsole::emptyLine(); // Новая строка  цветом фона консоли

    //Возвращаем настройки текста по умолчанию
    ColorConsole::setConsStdOutDefColor();

    return 0;
}