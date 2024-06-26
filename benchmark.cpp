#include <iostream>
#include <chrono>
#include <cmath>
#include <fstream>
using namespace std;
using namespace std::chrono; 

void intBenchmark(){
  const int additions = pow(10,9);
  const long long multiplications = (5 * pow(10,9)); // 5 billion
  const long long divisions = (2* pow(10,9)); // 2 billion
  
  // Benchmark for additions
  auto start = high_resolution_clock::now();
  int sum = 0;
  for (int i = 0; i < additions; ++i) {
      sum += 1 + 1; // Integer constants additiong++
}
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<seconds>(stop - start);
  cout << "Integer addition time: " << duration.count() << "seconds";

  // Benchmark for multiplications
  start = high_resolution_clock::now();
  long long product = 1;
  for (long long i = 0; i < multiplications; ++i) {
      product *= 2 * 2; // Integer constants multiplication
  }
  stop = high_resolution_clock::now();
  duration = duration_cast<seconds>(stop - start);
  cout << "Integer multiplication time: " << duration.count() << "seconds";

//Benchmark for division
  start = high_resolution_clock::now();
  long long result = 1;
  for (long long i = 0; i < divisions; ++i) {
      result /= 2 / 2; // Integer constants division
  }
  stop = high_resolution_clock::now();
  duration = duration_cast<seconds>(stop - start);
  cout << "Integer division time: " << duration.count() << "seconds";
}

void floatBenchmark(){
  auto start = high_resolution_clock::now();
  const int operations = 1010;
  double operand1 = 1.0, operand2 = 2.0, result = 0.0;
  for (int i = 0; i < operations; ++i) {
      result = operand1 + operand2; // Floating point addition
      result = operand1 * operand2; // Floating point multiplication
      result = operand1 / operand2; // Floating point division
  }
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<seconds>(stop - start);
  cout << "Floating point operation time: " << duration.count() << "seconds";
}

void memBenchmark(){
  auto start = high_resolution_clock::now();
  const long long elements = (5 * pow(10,9)); 
  const int bytes = 4;
  char* array = new char[elements * bytes];

  for (long long i = 0; i < elements; ++i) {
      char value = array[i * bytes];
      array[i * bytes] = value + 1;
  }
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<seconds>(stop - start);
  cout << "Memory benchmark time: " << duration.count() << "seconds";

  delete[] array;
}

void hardDriveBenchmark1(){
  const long long read_bytes = pow(10,9); // 10^9 bytes
  const int chunk_size = 100; // 100 bytes each time

  // Benchmark for reading from memory
  auto start = high_resolution_clock::now();
  ifstream inputFile("input_file.bin", ios::binary);
  char buffer[chunk_size];
  long long bytesRead = 0;
  while (bytesRead < read_bytes) {
      inputFile.read(buffer, chunk_size);
      bytesRead += inputFile.gcount();
  }
  inputFile.close();
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<seconds>(stop - start);
  cout << "Read time: " << duration.count() << " seconds";

// Benchmark for writing to memory
 start = high_resolution_clock::now();
  ofstream outputFile("output_file.bin", ios::binary);
  long long bytesWritten = 0;
  while (bytesWritten < read_bytes) {
      outputFile.write(buffer, chunk_size);
      bytesWritten += chunk_size;
  }
  outputFile.close();
  stop = high_resolution_clock::now();
  duration = duration_cast<seconds>(stop - start);
  cout << "Write time: " << duration.count() << " seconds";
}

void hardDriveBenchmark2(){
  const long long file_size = pow(10,9); // 10^9 bytes
  const int chunk_size = 10000; // 10000 bytes each time
  //Benchmark for reading a file
  auto start = high_resolution_clock::now();
  ifstream inputFile("input_file.bin", ios::binary);
  char buffer[chunk_size];
  long long bytesRead = 0;
  while (bytesRead < file_size) {
      inputFile.read(buffer, chunk_size);
      bytesRead += inputFile.gcount();
  }
  inputFile.close();
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<seconds>(stop - start);
  cout << "Read time: " << duration.count() << " seconds";

 // Benchmark for writing to file
  start = high_resolution_clock::now();
  ofstream outputFile("output_file.bin", ios::binary);
  long long bytesWritten = 0;
  while (bytesWritten < file_size) {
      outputFile.write(buffer, chunk_size);
      bytesWritten += chunk_size;
    }
  outputFile.close();
  stop = high_resolution_clock::now();
  duration = duration_cast<seconds>(stop - start);
  cout << "Write time: " << duration.count() << " seconds";
}


int main() {
  intBenchmark();
  floatBenchmark();
  memBenchmark();
  hardDriveBenchmark1();
  hardDriveBenchmark2();

  return 0;

}


