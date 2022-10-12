#include<iostream>
#include<ctime>
using namespace std;

int main(){
time_t timetoday;
time(&timetoday);
cout << asctime(localtime(&timetoday)) << endl;
}
