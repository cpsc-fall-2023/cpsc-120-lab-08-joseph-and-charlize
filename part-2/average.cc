// Joseph Friend
// jafriend@csu.fullerton.edu
// @JaFriend
// Partners: @charlizemanuel
//

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  std::vector<double> values;

  if (argc <= 1) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }

  for (int i = 1; i < argc; i++) {
    values.push_back(std::stod(arguments[i]));
  }

  double sum{0};
  for (double element : values) {
    sum += element;
  }
  double number_of_elements = values.size();
  double average = (1 / number_of_elements) * sum;
  std::cout << "average = " << average << "\n";
  return 0;
}
