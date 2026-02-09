#include "solution.hpp"

Student ReadStudentRecFromStream(std::istream& is) {
  // your implementation here...
  std::string firstname = "";
  std::string lastname = "";
  unsigned int uin = 0;
  double gpa = 0.0
  char throw_away = '\0';
  
  if (!(is >> firstname >> lastname >> uin >> throw_away >> gpa)) {
    return Student{};
  }
  if (throw_away != ',') {
      return Student{};
  }
  
  if (lastname[lastname.length() - 1] != ',') {
    return Student{};
  }
  
  std::string last = "";
  for (int i = 0; i < lastname.length() - 2; i++) {
      last += lastname[i];
  }
  return Student(firstname + " " + last, uin, gpa);
}
