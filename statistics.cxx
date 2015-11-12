#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;
//--------------------------------------------------
// plenty of lines here
//--------------------------------------------------

int k;
double Z;
int rand();
double sum1, sum2;
//double mean, var;

void f1(double* x, int N){
  for(int j=0; j<N; j++){
    Z=(double) rand()/RAND_MAX;
    x[j]=Z;
  }
}

void MeanVar(double* x,int N, double& mean, double& var){
  for(int i=0;i<N;i++){
    sum1+=x[i];
  }
  mean=sum1/N;
  
  for(int i=0;i<N;i++){
    sum2+=pow((x[i]-mean),2);
  }
  var=sum2/N;
}


int main(){
   const int N = 100;
   double p[N];
   double mean, var;
   
   srand(time(NULL));//use current time as a seed value

   f1(p,N);
   
   MeanVar(p, N, mean, var);
   
   //for(k=0; k<N; k++){
    //cout << p[k] << endl;
   //}
   
   cout << "Mean = " << mean << endl;//Ergebnis 0.546825
   cout << "Variance = " << var << endl;//Ergebnis 0.0805946

   return 0;
}
