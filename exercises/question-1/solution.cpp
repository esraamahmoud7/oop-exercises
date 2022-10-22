#include <iostream>
#include <cmath>
using namespace std;
class point
{
private:
    int X,Y;
public:
    point (int x,int y)
    {
       X=x;
       Y=y;
    }
    void GetDistance(point p)
    {
        int z=p.X- this->X;
        int a=p.Y- this->Y;
        cout<<sqrt(pow(z,2)+ pow(a,2));
    }
};
int main()
{
    point p1(3,4);
    point p2(5,9);
    p1.GetDistance(p2);
}
