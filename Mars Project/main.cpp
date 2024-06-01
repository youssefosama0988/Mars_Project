#include <iostream>
#include <math.h>

using namespace std;

float euler_fn(float y_0 , float h ,int n);
float ODE (float x,float y);

int main()
{
    cout << "Hello world!" << endl;
    float n=euler_fn(0,1,2);
    cout << n << endl;

    n=euler_fn(0,1,0);
    cout << n << endl;



    return 0;
}

float euler_fn(float y_0 , float h ,int n){
    float x=0,y=y_0;

    if(n==0) y = y_0;
    else
    {

        for (int i=1 ; i<=n;i++)
        {
            y = y + h * ODE(x,y);
            x+=h;
        }
    }

    return y;

}
float ODE (float x,float y){

    return (136 * pow(x,3) + 8* pow(x,2) - 58 * x - 60* pow(y,2) - 11*y +95);
}
