#include <iostream>
#include <cmath>

struct point{
    float x;
    float y;
    float dis_to_00;
};

struct package{
    struct point a;
    struct point b;
    float distance;
    float slop;
};

float p_Distance(struct point a, struct point b);
float p_Slop(struct point a, struct point b);

using namespace std;

int main()
{
    struct point p0 = {0, 0};
    struct point p1;

    cout<<"=====Point 1====="<<endl;
    cout<<"x=";
    cin>>p1.x;
    cout<<"y=";
    cin>>p1.y;

    p1.dis_to_00 = p_Distance(p1, p0);
    cout<<p1.dis_to_00<<endl;

    struct point p2;
    cout<<"=====Point 2====="<<endl;
    cout<<"x=";
    cin>>p2.x;
    cout<<"y=";
    cin>>p2.y;
    p2.dis_to_00 = p_Distance(p2, p0);
    cout<<p2.dis_to_00<<endl;

    struct package info1;
    cout<<"=====Information====="<<endl;
    info1.a = p1;
    info1.b = p2;
    info1.distance = p_Distance(info1.a, info1.b);
    info1.slop = p_Slop(info1.a, info1.b);
    cout<<"a=("<<info1.a.x<<","<<info1.a.y<<")"<<endl;
    cout<<"b=("<<info1.b.x<<","<<info1.b.y<<")"<<endl;
    cout<<"Distance="<<info1.distance<<endl;
    cout<<"Slop="<<info1.slop<<endl;
    return 0;
}

float p_Distance(struct point a, struct point b){
    float dx, dy, dis;

    dx = a.x - b.x;
    dy = a.y - b.y;

    dis = sqrt(pow(dx, 2)+pow(dy, 2));

    return dis;
}

float p_Slop(struct point a, struct point b){
    float dx, dy, slop;

    dx = a.x - b.x;
    dy = a.y - b.y;
    slop = dy / dx;

    return slop;
}
