#pragma once
#include <iostream>
using namespace std;
class CPolygon
{
protected: // Базовый класс
    int m_x1;
    int m_y1;
    int m_x2;
    int m_y2;
    int m_x3;
    int m_y3;
    int m_x4;
    int m_y4;
public:
    CPolygon();// Конструктор
    CPolygon(int m_x1, int m_y1, int m_x2, int m_y2, int m_x3, int m_y3, int m_x4, int m_y4);
    CPolygon(int m_x1, int m_y1, int m_x2, int m_y2, int m_x3, int m_y3);// Конструкторы с параметрами, первый для четырехугольника, второй для треугольника
    ~CPolygon();// Деструктор
    virtual double findPerimetr() = 0; // Создание виртуальных методов
    virtual void showCharacteristics() = 0; // Для использования в производных классах
    virtual int NewCoordinates()=0;
};