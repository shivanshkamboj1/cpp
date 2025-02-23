#include<iostream>
using namespace std;
#include<math.h>
    
int main()
{
    int a = 1, b = -3, c = -10;
    int d=(b*b)-(4*a*c);
    double sqrtVal = sqrt(abs(d));
    double root1=0;
    double root2=0;
    if(d>0){
        //roots are real and different
        root1= (-(double)b+sqrtVal)/(2*a);
        root2= (-(double)b-sqrtVal)/(2*a);
    }
    else if(d==0){
        // roots are real and same
        root1=root2=(-(double)b / (2 * a));
    }
    else{
        // rooots are imaginary
                cout << "Roots are complex \n";
        cout << -(double)b / (2 * a) << " + i" << sqrtVal
            << "\n"
            << -(double)b / (2 * a) << " - i" << sqrtVal;
    }
    cout<<root1<<" "<<root2;
    return 0;
}