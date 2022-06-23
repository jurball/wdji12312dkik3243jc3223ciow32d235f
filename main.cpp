#include <iostream>
#include "neuron.cpp"

using namespace std;

int main()
{
    const int sizing = 3;
    double input[sizing] = { 0, 1, 0 };
    double weight[sizing] = { 3.49861, 3.83134, -4.36407 };

    double result = inputData(input, weight, sizing);

    if(activation_sigmoid(result) == 1)
        cout << "Hello world!" << endl;
    else
        cout << "GET OUT" << endl;
}
