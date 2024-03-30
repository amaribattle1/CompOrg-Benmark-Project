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
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(stop - start);
  cout << "Integer addition time: " << duration.count() << " milliseconds\n";

  // Benchmark for multiplications
  start = high_resolution_clock::now();
  long long product = 1;
  for (long long i = 0; i < MULTIPLICATIONS; ++i) {
      product *= 2 * 2; // Integer constants multiplication
  }
  stop = high_resolution_clock::now();
  duration = duration_cast<milliseconds>(stop - start);
  cout << "Integer multiplication time: " << duration.count() << " milliseconds\n";

//Benchmark for division
  start = high_resolution_clock::now();
  long long result = 1;
  for (long long i = 0; i < DIVISIONS; ++i) {
      result /= 2 / 2; // Integer constants division
  }
  stop = high_resolution_clock::now();
  duration = duration_cast<milliseconds>(stop - start);
  cout << "Integer division time: " << duration.count() << " milliseconds\n";
}

void floatBenchmark(){
  auto start = high_resolution_clock::now();
  
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(stop - start);
  cout << "Floating point operation time: " << duration.count() << " milliseconds\n";
}

void memBenchmark(){
  auto start = high_resolution_clock::now();
  
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(stop - start);
  cout << "Memory benchmark time: " << duration.count() << " milliseconds\n";
}

void hardDriveBenchmark1(){
  auto start = high_resolution_clock::now();
  
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(stop - start);
  cout << "Hard drive benchmark 1 time: " << duration.count() << " milliseconds\n";

}

void hardDriveBenchmark2(){
  auto start = high_resolution_clock::now();
  
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(stop - start);
  cout << "Hard drive benchmark 2 time: " << duration.count() << " milliseconds\n";

}



int main() {
  intBenchmark();
  floatBenchmark();
  hardDriveBenchmark1();
  hardDriveBenchmark2();

  return 0;
}
