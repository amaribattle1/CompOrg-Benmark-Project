#include <iostream>
#include benchmark.cpp;
using namespace std;

int main() {
  intBenchmark();
  floatBenchmark();
  hardDriveBenchmark1();
  hardDriveBenchmark2();

  return 0;

}
