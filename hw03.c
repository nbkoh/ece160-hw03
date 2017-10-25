#include <stdio.h>
/
typedef enum {
  NAME_ONLY = 0,
  MAJOR_AND_NAME = 1, 
  YEAR_AND_NAME = 2
} Mode;

typedef struct {
  char *first_name;
  char *last_name;
  // TODO: add fields here for major and year
} Student;

void print_student(Mode m, Student s) {
  switch (m) {
    case NAME_ONLY:
      printf("%s %s\n", s.first_name, s.last_name);
      break;
	// TODO: handle other cases
  }
}

/*
	argv[1] will be the Mode integer
	argv[2...] will be student info in the form [first_name, last_name, major, year]
	the fields are all strings (char[])
	except year is a number (int)
*/
int main() {
  // TODO: parse argv to populate student structs 
  // for now, here's two hardcoded students:
  Student s1, s2;
  s1.first_name = "Julia";
  s1.last_name = "A";
  s2.first_name = "Peter";
  s2.last_name = "Cooper";
  
  print_student(NAME_ONLY, s1);
  print_student(NAME_ONLY, s2);
  return 0;
}
