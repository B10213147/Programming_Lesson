#include <iostream>
#include <cmath>

struct point{
    float x;
    float y;
    float dis_to_00;
};

float p_Distance(struct point a, struct point b);

using namespace std;

int main()
{
    struct point p0 = {0, 0};
    struct point p1;

    cout<<"x=";
    cin>>p1.x;
    cout<<"y=";
    cin>>p1.y;

    p1.dis_to_00 = p_Distance(p1, p0);
    cout<<p1.dis_to_00;
    return 0;
}

float p_Distance(struct point a, struct point b){
    float dx, dy, dis;

    dx = a.x - b.x;
    dy = a.y - b.y;

    dis = sqrt(pow(dx, 2)+pow(dy, 2));

    return dis;
}
