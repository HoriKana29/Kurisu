#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
    float num,sum = 0,sum2 = 0;
     int N = 0;
    ifstream source("score.txt");
    string textline;
    while(getline(source,textline)){
        num=atof(textline.c_str());
        sum+=num;
        sum2+=pow(num,2);
        N+=1;
    }
    float mean,BB;
    mean = sum/N;
    BB = sqrt((sum2/N)-pow(mean,2));
    
    cout << "Number of data = "<< N <<"\n";
    cout << setprecision(3);
    cout << "Mean = "<< mean<<"\n";
    cout << "Standard deviation = "<< BB;
}