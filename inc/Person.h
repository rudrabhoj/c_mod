struct Person {
  char *name;
  int age;
};

typedef struct Person Person;

void Person_new(char *name, int age);
void Person_setAge(Person *per, int newAge);
void Person_setName(Person *per, char *newName);

void showWelcomeMessage();

//Private
void Person__setNameAge(Person *per, char *newName, int newAge);
