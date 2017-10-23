#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <Person.h>

Person *Person_new(char *name, int age) {
  Person *per = malloc(sizeof(Person));
  per->name = malloc(sizeof(char) * 65);

  _Person_setNameAge(per, name, age);

  return per;
}

void Person_delete(Person *per) {
  free(per);
}

void Person_setAge(Person *per, int newAge) {
  per->age = newAge;
}

void Person_setName(Person *per, char *newName) {
  strcpy(per->name, newName);
}

void Person_printPerson(Person *per) {
  char *name = per->name;
  int age = per->age;

  printf("Hello %s, your age is %d\n", name, age);
}

void _Person_setNameAge(Person *per, char *newName, int newAge) {
  Person_setName(per, newName);
  Person_setAge(per, newAge);
}
