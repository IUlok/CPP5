#include "CPolygon.h"
#include <iostream>
using namespace std;
CPolygon::CPolygon()
{ // Описание конструктора
    m_x1 = 0;
    m_y1 = 0;
    m_x2 = 0;
    m_y2 = 0;
    m_x3 = 0;
    m_y3 = 0;
    m_x4 = 0;
    m_y4 = 0;
}
CPolygon::CPolygon(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{ // Описание конструктора с параметрами для четырехугольника
    m_x1 = x1;
    m_y1 = y1;
    m_x2 = x2;
    m_y2 = y2;
    m_x3 = x3;
    m_y3 = y3;
    m_x4 = x4;
    m_y4 = y4;
}
CPolygon::CPolygon(int x1, int y1, int x2, int y2, int x3, int y3)
{ // Конструктор с параметрами для треугольника
    m_x1 = x1;
    m_y1 = y1;
    m_x2 = x2;
    m_y2 = y2;
    m_x3 = x3;
    m_y3 = y3;
}
CPolygon::~CPolygon()
{ // Описание деструктора
    cout << "The object is destroyed" << endl;
}