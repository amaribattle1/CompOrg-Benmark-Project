#include <iostream>
#include <chrono>
#include <cmath>
using namespace std;
using namespace std::chrono; 

void intBenchmark(){
  const int ADDITIONS = pow(10,9);
  const long long MULTIPLICATIONS = (5 * pow(10,9)); // 5 billion
  const long long DIVISIONS = (2* pow(10,9)); // 2 billion
}

void floatBenchmark(){
  
}

void memBenchmark(){
  
}

void hardDriveBenchmark1(){
  
}

void hardDriveBenchmark2(){

}



int main() {
  intBenchmark();
  floatBenchmark();
  hardDriveBenchmark1();
  hardDriveBenchmark2();

  return 0;
}
