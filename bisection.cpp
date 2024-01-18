#include<iostream>
#include<cmath> 
using namespace std;

float func_calc(float a) {
    return a * sin(a) - 1;
}

int main() {
    float a, b, c, fa, fb, fc, tol_value;
    
    cout << "Enter upper limit and lower limit a and b: ";
    cin >> a >> b;

    cout << "Enter tolerance value: ";
    cin >> tol_value;

    do {
        fa = func_calc(a);
        fb = func_calc(b);
        
        if (fa * fb > 0) {
            cout << "There's no root in the interval provided.";
            return 0; 
        }

        c = (a + b) / 2;
        fc = func_calc(c);

        if (fa * fc > 0) {
            a = c; 
        } else if (fb * fc > 0) {
            b = c; 
        }
    } while (fabs(a - b) > tol_value);

    cout << "The required root in the provided interval is: " << c;

    return 0;
}
