#include <iostream>
#include <string>

int main() {
  std::string line;
  std::string number_str;
  std::string check_num_str;
  int final_result{0}; 
  bool first{true}; 
  while (getline(std::cin, line)) {
    number_str = "";
    check_num_str = "";
    first = true;
    for (int i = 0; i < line.length(); ++i) {
      if (isalnum(line[i])) {
        if (isdigit(line[i])) {
          if (first) {
            number_str += line[i];
            number_str += line[i];
            first = false;  
          } else {
            number_str[1] = line[i];  
          } 
        } else { //one, two, three, four, five, six, seven, eigth, nine
          check_num_str += line[i]; 
          if (check_num_str.find("one") != std::string::npos) {
            if (first) {
              number_str += "1";
              number_str += "1";
              first = false;
            } else {
              number_str[1] = '1'; 
            } 
            check_num_str = "";
            check_num_str += line[i];
          } else if (check_num_str.find("two") != std::string::npos) {
            if (first) {
              number_str += "2";
              number_str += "2";
              first = false;
            } else {
              number_str[1] = '2'; 
            } 
            check_num_str = "";
            check_num_str += line[i];
          } else if (check_num_str.find("three") != std::string::npos) {
            if (first) {
              number_str += "3";
              number_str += "3";
              first = false;
            } else {
              number_str[1] = '3'; 
            } 
            check_num_str = "";
            check_num_str += line[i];
          } else if (check_num_str.find("four") != std::string::npos) {
            if (first) {
              number_str += "4";
              number_str += "4";
              first = false;
            } else {
              number_str[1] = '4'; 
            } 
            check_num_str = "";
            check_num_str += line[i];
          } else if (check_num_str.find("five") != std::string::npos) {
            if (first) {
              number_str += "5";
              number_str += "5";
              first = false;
            } else {
              number_str[1] = '5'; 
            } 
            check_num_str = "";
            check_num_str += line[i];
          } else if (check_num_str.find("six") != std::string::npos) {
            if (first) {
              number_str += "6";
              number_str += "6";
              first = false;
            } else {
              number_str[1] = '6'; 
            } 
            check_num_str = "";
            check_num_str += line[i];
          } else if (check_num_str.find("seven") != std::string::npos) {
            if (first) {
              number_str += "7";
              number_str += "7";
              first = false;
            } else {
              number_str[1] = '7'; 
            } 
            check_num_str = "";
            check_num_str += line[i];
          } else if (check_num_str.find("eight") != std::string::npos) {
            if (first) {
              number_str += "8";
              number_str += "8";
              first = false;
            } else {
              number_str[1] = '8'; 
            } 
            check_num_str = "";
            check_num_str += line[i];
          } else if (check_num_str.find("nine") != std::string::npos) {
            if (first) {
              number_str += "9";
              number_str += "9";
              first = false;
            } else {
              number_str[1] = '9'; 
            } 
            check_num_str = "";
            check_num_str += line[i]; 
          } 
        }  
      } 
    } 
    std::cout << "Calculation: " << number_str << std::endl;
    final_result += std::stoi(number_str);
  }
  std::cout << "Final calculation: " << final_result << std::endl;
  return 0;
} 