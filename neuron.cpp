#include <iostream>
#include <cmath>

using namespace std;

double sigmoid(double x)
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
            w[j] += error;
        }
    }
    return output = sigmoid(input);
}

double train_log(double arr[], double w[], int sizing, int epoch)
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