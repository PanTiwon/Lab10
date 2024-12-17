#include<iostream>
#include<fstream>
#include<string>
#include<iomanip> 
#include<cmath>
using namespace std;

int main(){ 
    fstream source;
    source.open("score.txt");
    string num;
    double total,Numline,totalplus;
while (getline(source,num))
{
    Numline++;
    total += atof(num.c_str());
    totalplus += pow(atof(num.c_str()),2);
}
    cout << "Number of data = "<< Numline<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<< total/Numline<<"\n";
    cout << "Standard deviation = "<< sqrt(totalplus/Numline-pow(total/Numline,2));
}
