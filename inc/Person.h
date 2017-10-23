#ifndef __C_MOD__PERSON_H__
#define __C_MOD__PERSON_H__
struct Person {
  char *name;
  int age;
};

typedef struct Person Person;

Person *Person_new(char *name, int age);
void Person_delete(Person *per);

void Person_setAge(Person *per, int newAge);
void Person_setName(Person *per, char *newName);
void Person_printPerson(Person *per);


//Private
void _Person_setNameAge(Person *per, char *newName, int newAge);
#endif
