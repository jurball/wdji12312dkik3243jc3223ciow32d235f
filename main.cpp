#include <iostream>
#include <cmath>

using namespace std;

double sigmoid(double x) // function f(x)
{
    double res = 1 / (1 + pow(2.71828, -x));
    return res;
}

double inputData(double arr[], double w[], int size)
{
  double input, output;
  for (int i = 0; i < size; i++)
    input += arr[i] * w[i];

  return output = sigmoid(input);
}

double train(double arr[], double w[], int sizing, int epoch)
{
    double input, output, error;

    for(int i = 0; i < epoch; i++)
    {
        for(int j = 0; j < sizing; j++)
        {
            input += arr[j] * w[j];
            output = sigmoid(input);
            error += pow(1 - output, 2);
            cout << j << ". Weight: " << w[j] << "\tError: "<< error << endl;
            w[j] += error;
        }
        cout << endl << "Output: " << output << endl;
        cout << "------------------------------------------------------------------" << endl;
    }

    return output = sigmoid(input);
}

double activation_sigmoid(double x)
{
    if(x >= 0.8)
        return 1;
    else
        return -1;
}

int main()
{
    const int sizing = 3;
    double i[sizing] = { 1, 1, 0 };
    double w[sizing] = { 3.49861, 3.83134, -4.36407 };

    double result = inputData(i, w, sizing);

    //cout << train(i, w, size, epoch) << endl;
    //cout << inputData(i, w, size) << endl;

    if(activation_sigmoid(result) > 0)
        cout << "Yes! 1, 1, 0 = 1 or 1, 1, 1 = 1" << endl;
    else
        cout << "No! Its error" << endl;
}
