#include "solution.hpp"

Student ReadStudentRecFromStream(std::istream& is) {
  // your implementation here...
  while (is.good()) {
    std::string name = "";
    unsigned int uin = 0;
    double gpa = 0.0;
    char throw_away = '\0';
    is >> name >> throw_away >> uin >> throw_away >> gpa;
    if (is.fail()) {
      break;
    }
    return Student(name, uin, gpa);
  }
  return Student{};
}
