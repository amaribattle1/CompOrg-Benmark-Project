#include <iostream>
#include <chrono>
#include <cmath>
using namespace std;
using namespace std::chrono; 

void intBenchmark(){
  const int ADDITIONS = pow(10,9);
  const long long MULTIPLICATIONS = (5 * pow(10,9)); // 5 billion
  const long long DIVISIONS = (2* pow(10,9)); // 2 billion
  
  // Benchmark for additions
  auto start = high_resolution_clock::now();
  int sum = 0;
  for (int i = 0; i < ADDITIONS; ++i) {
      sum += 1 + 1; // Integer constants addition
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
