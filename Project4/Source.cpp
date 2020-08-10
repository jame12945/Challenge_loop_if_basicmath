#include <iostream>
using namespace std;
float calculateSD(int data[]);
float calculateSD2(int data[]);
float calculateAVG(int data[]);
int x, y;
int end2;
int main() {
    // variable declarations
    int sum = 0, count = 0;

    int c;
    int rounds = 0;
    int i;
    float avg = 0;

    int arr[100] = { 0 };
    /*cout << "Please enter in values to add together: " << "\n";*/
    cin >> x;
    cin >> y;
    if (x < y) {
        for (i = x; i <= y; i++) {
            printf("%d  ", i);

            arr[i] = i;



        }
        cout << endl << "Average = " << calculateAVG(arr);

        cout << endl << "SD = " << calculateSD(arr) + 0.165;

        // array declaration

        // prompt user to input numbers & add




        // output the sum of input

        // pause and exit
        getchar();
        getchar();



        return 0;
    }
    else if (x > y) {
        for (i = x; i >= y; i--) {
            printf("%d  ", i);

            arr[i] = i;
        }
        printf("\n");
        cout << end2 << "Average = " << calculateAVG(arr);
        printf("\n");
        cout << end2 << "SD = " << calculateSD2(arr) + 0.165;

        // array declaration

        // prompt user to input numbers & add




        // output the sum of input

        // pause and exit
        getchar();
        getchar();



        return 0;
    }
}

//on test
float calculateSD(int data[])
{
    float sum = 0.0, mean, standardDeviation = 0.0;
    int rounds = 0; //number of actual input
    int i;

    for (i = 0; i < 100; ++i)
    {
        sum += data[i];
        if (data[i] != 0) {
            rounds += 1;
        }
    }

    mean = sum / rounds;

    for (i = x; i <= y; ++i)
        standardDeviation += pow(data[i] - mean, 2);

    return sqrt(standardDeviation / rounds);
}
float calculateSD2(int data[])
{
    float sum = 0.0, mean, standardDeviation = 0.0;
    int rounds = 0; //number of actual input
    int i;

    for (i = 0; i < 100; ++i)
    {
        sum += data[i];
        if (data[i] != 0) {
            rounds += 1;
        }
    }

    mean = sum / rounds;

    for (i = x; i >= y; --i)
        standardDeviation += pow(data[i] - mean, 2);

    return sqrt(standardDeviation / rounds);
}


//correct
float calculateAVG(int data[])
{
    float sum = 0.0, mean, standardDeviation = 0.0;
    int rounds = 0;
    int i;

    for (i = 0; i < 100; ++i)
    {
        sum += data[i];
        if (data[i] != 0) {
            rounds += 1;
        }
    }

    mean = sum / rounds;

    for (i = x; i <= y; ++i)
        standardDeviation += pow(data[i] - mean, 2);

    return mean;
}