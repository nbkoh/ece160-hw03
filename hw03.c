#include <stdio.h>
#include <stdlib.h>

typedef enum {
  NAME_ONLY = 0,
  MAJOR_AND_NAME = 1, 
  YEAR_AND_NAME = 2
} Mode;

typedef struct {
  char *first_name;
  char *last_name;
  // TODO: add fields here for major and year
  char *major;
  int year;
} Student;

void print_student(Mode m, Student s) {
  switch (m) {
    case NAME_ONLY:
      printf("%s %s ", s.first_name, s.last_name);
      break;
	// TODO: handle other cases
    case MAJOR_AND_NAME:
      printf("%s %s %s ", s.major, s.first_name, s.last_name);
      break;
    case YEAR_AND_NAME:
      printf("%d %s %s ", s.year, s.first_name, s.last_name);
      break;
  }
}

/*
	argv[1] will be the Mode integer
	argv[2...] will be student info in the form [first_name, last_name, major, year]
	the fields are all strings (char[])
	except year is a number (int)
*/
int main(int argc, char* argv[]) {
  // TODO: parse argv to populate student structs 
  // for now, here's two hardcoded students:

  int n = argc - 2;
  int i = 1;

  while(n>0)
  {
    Student s1;
    s1.first_name = argv[i+1];
    s1.last_name = argv[i+2];
    s1.major = argv[i+3];
    s1.year = atoi(argv[i+4]);

    if(atoi(argv[1]) == 0)
    {
      print_student(NAME_ONLY, s1);
    }

    else if(atoi(argv[1]) == 1)
    {
      print_student(MAJOR_AND_NAME, s1);
    }

    else if(atoi(argv[1]) == 2)
    {
      print_student(YEAR_AND_NAME, s1);
    }

    n = n - 4;
    i = i + 4;
  }
  
  return 0;
}
