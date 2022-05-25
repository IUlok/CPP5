#pragma once
#include <iostream>
using namespace std;
class CPolygon
{
protected:
    int m_x1;
    int m_y1;
    int m_x2;
    int m_y2;
    int m_x3;
    int m_y3;
    int m_x4;
    int m_y4;
public:
    CPolygon();//конструктор
    CPolygon(int m_x1, int m_y1, int m_x2, int m_y2, int m_x3, int m_y3, int m_x4, int m_y4);
    CPolygon(int m_x1, int m_y1, int m_x2, int m_y2, int m_x3, int m_y3);//конструктор с параметрами
    ~CPolygon();//деструктор
    virtual double findPerimetr() = 0;
    virtual void showCharacteristics() = 0;
    virtual int NewCoordinates()=0;
};