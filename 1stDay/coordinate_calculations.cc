#include <iostream>
#include <string>
 
int main() {
  std::string line;
  std::string number_str;
  unsigned number;
  unsigned final_result{0};
  bool first{true}; 
  while (getline(std::cin, line)) {
    number_str = "";
    first = true;
    for (int i = 0; i < line.length(); ++i) {
      if (isdigit(line[i])) {
        if (first) {
          number_str += line[i]; 
          number_str += line[i]; 
          first = false;
        } else {
          number_str[1] = line[i];  
        } 
      } 
    } 
    std::cout << "Calculation: " << number_str << std::endl;
    final_result += std::stoi(number_str);
  } 
  std::cout << "Final calculations: " << final_result << std::endl;
  return 0;
} 