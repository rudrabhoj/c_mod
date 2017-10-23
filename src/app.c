#include <Person.h>

int main(int argc, char *argv[]) {
  Person *alex = Person_new("Alexander III of Macedon", 30);
  Person_printPerson(alex);

  return 0;
}
