#include <iostream>
#include <cmath>
using namespace std;
template<class T>
double dist(T a,T b){
    return fabs(a-b);
}
class point{
private:
    int x,y,z;
public:
    point(int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }
    double operator-(point c);
    
};
double point::operator-(point c){
    double h;
    h=(x-c.x)*(x-c.x)+(y-c.y)*(y-c.y)+(z-c.z)*(z-c.z);
    h=sqrt(h);
    return h;
}
int main()
{
    int x;
    cin>>x;
    int a,b;
    float c,d;
    int a1,a2,a3,a4,a5,a6;
    while(x==1||x==2||x==3){
        switch (x){
            case 1:cin>>a>>b;cout<<dist(a,b)<<endl;break;
            case 2:cin>>c>>d;cout<<dist(c,d)<<endl;break;
            case 3:cin>>a1>>a2>>a3>>a4>>a5>>a6;point e(a1,a2,a3);point f(a4,a5,a6);cout<<dist(e,f)<<endl;break;
        }
        cin>>x;
    }
    return 0;
}
