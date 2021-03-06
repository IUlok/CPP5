#pragma once
#include <iostream>
#include "CPolygon.h"
#include <conio.h>
#include <iostream>
#include <cmath>
using namespace std;
class CTriangle:public CPolygon // Создание класса, который является производным класса CPolygon
{
public:
    CTriangle():CPolygon() {};// Конструктор, присваивание значений основного класса производному
    CTriangle(int x1, int y1, int x2, int y2, int x3, int y3): CPolygon(x1, y1, x2, y2, x3, y3){};
    ~CTriangle()
    {
        cout << "The object is destroyed" << endl;
    };// Деструктор
    double findPerimetr(); // Объявление методов в этом подклассе
    void showCharacteristics();
    int NewCoordinates();
};
double CTriangle::findPerimetr() // Описание метода для поиска периметра
{
    double a, b, c, P;
    a = sqrt((m_x1 - m_x2) * (m_x1 - m_x2) + (m_y1 - m_y2) * (m_y1 - m_y2));
    b = sqrt((m_x2 - m_x3) * (m_x2 - m_x3) + (m_y2 - m_y3) * (m_y2 - m_y3));
    c = sqrt((m_x3 - m_x1) * (m_x3 - m_x1) + (m_y3 - m_y1) * (m_y3 - m_y1));
    P = a + b + c;
    return P;
}
void CTriangle::showCharacteristics() { // Описание метода для отображения координат текущего треугольника
    cout << "the first coordinate: " << "(" << m_x1 << ";" << m_y1 << ")" << endl;
    cout << "the second coordinate: " << "(" << m_x2 << ";" << m_y2 << ")" << endl;
    cout << "The third coordinate: " << "(" << m_x3 << ";" << m_y3 << ")" << endl;
}
int CTriangle::NewCoordinates(){ // Описание метода для заполнения координат треугольника
    cin>>m_x1;
    cin>>m_y1;
    cin>>m_x2;
    cin>>m_y2;
    cin>>m_x3;
    cin>>m_y3;
    this-> m_x1 = m_x1; // Переприсваивание значений
    this-> m_y1 = m_y1;
    this-> m_x2 = m_x2;
    this->m_y2 = m_y2;
    this->m_x3 = m_x3;
    this->m_y3 = m_y3;
}