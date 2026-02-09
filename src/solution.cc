#include "solution.hpp"

Student ReadStudentRecFromStream(std::istream& is) {
  // your implementation here...
  std::string firstname = "";
  std::string lastname = "";
  unsigned int uin = 0;
  double gpa = 0.0;
  char firstThrow = '\0';
  char secondThrow = '\0';
  
  if (!(is >> firstname >> lastname >> firstThrow >> uin >> secondThrow >> gpa)) {
    if (firstThrow == ',' && secondThrow == ',') {
      return Student{};
    }
    return student(firstname + " " + lastname, uin, gpa);
  }
  // if (is.fail()) {
  //   return Student{};
  // }
  return Student{};
}
