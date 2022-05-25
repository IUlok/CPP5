#include <iostream>
#include <math.h>
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
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
    int x4;
    int y4;
public:
    CPolygon(){
        m_x1 = 0;
        m_y1 = 0;
        m_x2 = 0;
        m_y2 = 0;
        m_x3 = 0;
        m_y3 = 0;
        m_x4 = 0;
        m_y4 = 0;
    };//конструктор
    CPolygon(int m_x1, int m_y1, int m_x2, int m_y2, int m_x3, int m_y3, int m_x4, int m_y4)
    {
        m_x1 = x1;
        m_y1 = y1;
        m_x2 = x2;
        m_y2 = y2;
        m_x3 = x3;
        m_y3 = y3;
        m_x4 = x4;
        m_y4 = y4;
    };
    CPolygon(int m_x1, int m_y1, int m_x2, int m_y2, int m_x3, int m_y3){
        m_x1 = x1;
        m_y1 = y1;
        m_x2 = x2;
        m_y2 = y2;
        m_x3 = x3;
        m_y3 = y3;
    };//конструктор с параметрами
    ~CPolygon(){
        cout << "The object is destroyed" << endl;
    };//деструктор
    virtual double findPerimetr() = 0;
    virtual void showCharacteristics() = 0;
    virtual int NewCoordinates()=0;
};
