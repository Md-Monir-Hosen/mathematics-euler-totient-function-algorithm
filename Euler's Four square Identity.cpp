#include<bits/stdc++.h>
using namespace std;
#define show(x) cout << #x << " = " << x << "\n";
void check_euler_four_square_identity(int a,int b,int ab)
{
    int s=0;
    for(int i=0;i*i<=ab;i++)
    {
        s=i*i;
        for(int j=i;j*j<=ab;i++)
        {
            s=j*j+i*i;
            for(int k=j;k<=ab;k++)
            {
                s=k*k+j*j+i*i;
                for(int l=k;l*l<=ab;l++)
                {
                    s=l*l+k*k+j*j+i*i;
                    if(s==ab)
                    {
                         show(i);
                        show(j);
                        show(k);
                        show(l);
                        cout <<""
                        << "Product of " << a
                        << " and " << b;
                        cout << " can be written"<<
                        " as sum of squares of i, "<<
                         "j, k, l\n";
                        cout << ab << " = ";
                        cout << i << "*" << i << " + ";
                        cout << j << "*" << j << " + ";
                        cout << k << "*" << k << " + ";
                        cout << l << "*" << l << "\n";
                        cout << "\n";
                    }
                }
            }
        }
    }
}
int main()
{
     int a = 30;
     int b = 4;
     int ab = a * b;
      check_euler_four_square_identity(a, b, ab);
    return 0;
}
