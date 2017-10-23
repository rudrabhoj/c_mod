struct Person {
  char *name;
  int age;
};

typedef struct Person Person;

Person *Person_new(char *name, int age);
void Person_setAge(Person *per, int newAge);
void Person_setName(Person *per, char *newName);
void Person_printPerson(Person *per);


//Private
void Person__setNameAge(Person *per, char *newName, int newAge);
