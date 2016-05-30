#include <iostream>
#include <cmath>

struct point{
    int x;
    int y;
};

struct package{
    struct point a;
    struct point b;
    float distance;
    float slope;
};

struct point p_Input(void);
float p_Distance(struct point a, struct point b);
float p_Slope(struct point a, struct point b);
void show_Package(struct package info);

using namespace std;

int main()
{
    struct point p0 = {0, 0};
    struct point p1;

    cout<<"=====Point 1====="<<endl;
    p1 = p_Input();
    float slope = p_Slope(p0, p1);
    cout<<"slope="<<slope<<endl;

    struct point p2;
    cout<<"=====Point 2====="<<endl;
    p2 = p_Input();

    struct point p3;
    cout<<"=====Point 3====="<<endl;
    p3 = p_Input();

    struct package info1;
    info1.a = p1;
    info1.b = p2;

    struct package info2;
    info2.a = p2;
    info2.b = p3;

    struct package info3;
    info3.a = p3;
    info3.b = p1;

    show_Package(info1);
    show_Package(info2);
    show_Package(info3);

    return 0;
}

struct point p_Input(void){
    struct point p;

    cout<<"x=";
    cin>>p.x;
    cout<<"y=";
    cin>>p.y;

    return p;
}

float p_Distance(struct point a, struct point b){
    float dx, dy, dis;

    dx = b.x - a.x;
    dy = b.y - a.y;
    dis = sqrt(pow(dx, 2)+pow(dy, 2));

    return dis;
}

float p_Slope(struct point a, struct point b){
    float dx, dy, slope;

    dx = b.x - a.x;
    dy = b.y - a.y;
    slope = dy / dx;

    return slope;
}

void show_Package(struct package info){
    cout<<"=====Information====="<<endl;
    info.distance = p_Distance(info.a, info.b);
    info.slope = p_Slope(info.a, info.b);
    cout<<"a=("<<info.a.x<<","<<info.a.y<<")"<<endl;
    cout<<"b=("<<info.b.x<<","<<info.b.y<<")"<<endl;
    cout<<"Distance="<<info.distance<<endl;
    cout<<"slope="<<info.slope<<endl;
}
