#include <QCoreApplication>
#include <QTextStream>
#include <iostream>
#include "utils.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "1. Starting the application" << endl;
    double x = 1;
    cout << cum_normal(x) << endl;

    return 0;
}

