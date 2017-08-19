#include <windows.h>
#include <iostream>
#include <math.h>

double GetWindChillIndex(double vwind,double temp)
{
    double vwinda,vwindb,tempa,tempb;
  
    vwinda=pow(vwind,0.16);
    vwindb=pow(vwind,0.15);

    tempa=temp*0.6215;
    tempb=temp*0.3965;

    //cout<<"Wind chill effect index:"<<13.12+tempa-(11.37*vwinda)+(tempb*vwindb)<<endl;

    return (13.12+tempa-(11.37*vwinda)+(tempb*vwindb));
}

