//#pragma once
#include <iostream>
#include "CPolygon.h"
#include <conio.h>
#include <cmath>
using namespace std;
class CQuad:public CPolygon
{
public:
    CQuad():CPolygon() {};//конструктор
    CQuad(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) : CPolygon(x1, y1, x2, y2, x3, y3, x4, y4) {}//конструктор спараметрами
    ~CQuad()
    {
        cout << "The object is destroyed" << endl;
    };//деструктор
    double findPerimetr();
    void showCharacteristics();
    int NewCoordinates();
};

double CQuad::findPerimetr()
{
    double a, b, c, d, P;
    a = sqrt((m_x1 - m_x2) * (m_x1 - m_x2) + (m_y1 - m_y2) * (m_y1 - m_y2));
    b = sqrt((m_x2 - m_x3) * (m_x2 - m_x3) + (m_y2 - m_y3) * (m_y2 - m_y3));
    c = sqrt((m_x3 - m_x4) * (m_x3 - m_x4) + (m_y3 - m_y4) * (m_y3 - m_y4));
    d = sqrt((m_x4 - m_x1) * (m_x4 - m_x1) + (m_y4 - m_y1) * (m_y4 - m_y1));
    P = a + b + c + d;
    return P;
}
void CQuad::showCharacteristics()
{
    cout << "the first coordinate: " << "(" << m_x1 << ";" << m_y1 << ")" << endl;
    cout << "the second coordinate: " << "(" << m_x2 << ";" << m_y2 << ")" << endl;
    cout << "The third coordinate: " << "(" << m_x3 << ";" << m_y3 << ")" << endl;
    cout << "The fourth coordinate: " << "(" << m_x4 << ";" << m_y4 << ")" << endl;
}
int CQuad::NewCoordinates(){
    cin>>m_x1;
    cin>>m_y1;
    cin>>m_x2;
    cin>>m_y2;
    cin>>m_x3;
    cin>>m_y3;
    cin>>m_x4;
    cin>>m_y4;
    this-> m_x1 = m_x1;
    this-> m_y1 = m_y1;
    this-> m_x2 = m_x2;
    this->m_y2 = m_y2;
    this->m_x3 = m_x3;
    this->m_y3 = m_y3;
    this-> m_x4 = m_x4;
    this-> m_y4 = m_y4;
}
