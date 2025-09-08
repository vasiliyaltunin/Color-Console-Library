/**
 * @file main.cpp
 * @author Василий Алтунин (skyr@altuninvv.ru)
 * @brief Файл содержит пример использования класса ColorConsole
 * @version 0.1.0
 * @date 2025-09-05
 *
 * @copyright Алтунин Василий 2025
 *
 * Выводит в консоль флаг России
 *
 */

#include <iostream>

#include "../../include/colorconsole/colorconsole.h"

using ccon::ColorConsole;

int main(int argc, char *argv[])
{
   ColorConsole::init(); // Инициализация

    // Две новых строки образуют пустую строку 
   ColorConsole::emptyLine();
   ColorConsole::emptyLine();

   // Белый фон и текст
  ColorConsole::setConsStdOutColor(ColorConsole::WHITE,ColorConsole::WHITE);
   printf("%10s"," "); //Выводим 10 пробелов

  ColorConsole::emptyLine(); // Новая строка  цветом фона консоли

   // Белый текст и синий фон
  ColorConsole::setConsStdOutColor(ColorConsole::WHITE,ColorConsole::DARK_BLUE); 
   printf("%10s","  RUSSIA  ");

   ColorConsole::emptyLine(); // Новая строка  цветом фона консоли

   // Красный фон и текст
  ColorConsole::setConsStdOutColor(ColorConsole::DARK_RED,ColorConsole::DARK_RED); 
   printf("%10s"," ");

   // Две новых строки образуют пустую строку 
   ColorConsole::emptyLine(); 
  ColorConsole::emptyLine();

   //Возвращаем настройки текста по умолчанию
   ColorConsole::setConsStdOutDefColor();

   return 0;
}