#include <iostream>
#include <chrono>
#include <cmath>
using namespace std;
using namespace std::chrono; 

void intBenchmark(){
  const int additions = pow(10,9);
  const long long multiplications = (5 * pow(10,9)); // 5 billion
  const long long division = (2* pow(10,9)); // 2 billion
  
  // Benchmark for additions
  auto start = high_resolution_clock::now();
  int sum = 0;
  for (int i = 0; i < additions; ++i) {
      sum += 1 + 1; // Integer constants addition
}
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(stop - start);
  cout << "Integer addition time: " << duration.count() << " milliseconds\n";

  // Benchmark for multiplications
  start = high_resolution_clock::now();
  long long product = 1;
  for (long long i = 0; i < multiplications; ++i) {
      product *= 2 * 2; // Integer constants multiplication
  }
  stop = high_resolution_clock::now();
  duration = duration_cast<milliseconds>(stop - start);
  cout << "Integer multiplication time: " << duration.count() << " milliseconds\n";

//Benchmark for division
  start = high_resolution_clock::now();
  long long result = 1;
  for (long long i = 0; i < divisions; ++i) {
      result /= 2 / 2; // Integer constants division
  }
  stop = high_resolution_clock::now();
  duration = duration_cast<milliseconds>(stop - start);
  cout << "Integer division time: " << duration.count() << " milliseconds\n";
}

void floatBenchmark(){
  auto start = high_resolution_clock::now();
  const int operations = pow(10,10);
  double operand1 = 1.0, operand2 = 2.0, result = 0.0;
  for (int i = 0; i < operations; ++i) {
      result = operand1 + operand2; // Floating point addition
      result = operand1 * operand2; // Floating point multiplication
      result = operand1 / operand2; // Floating point division
  }
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(stop - start);
  cout << "Floating point operation time: " << duration.count() << " milliseconds\n";
}

void memBenchmark(){
  auto start = high_resolution_clock::now();
  const long long elements = (5 * pow(10,9)); 
  const int bytes = 4;
  char* array = new char[elements * bytes];

  auto start = high_resolution_clock::now();
  for (long long i = 0; i < elements; ++i) {
      char value = array[i * bytes];
      array[i * bytes] = value + 1;
  }
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(stop - start);
  cout << "Memory benchmark time: " << duration.count() << " milliseconds\n";

  delete[] array;
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
