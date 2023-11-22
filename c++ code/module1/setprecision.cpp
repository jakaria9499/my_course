#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
    double a;
    cin >> a;
    // cout << a << endl;
    cout << fixed << setprecision(5) << a << endl;
    return 0;
}