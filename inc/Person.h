struct Person {
  char *name;
  int age;
};

void Person_new(char *name, int age);
void Person_setAge(Person *per, int newAge);
void Person_setName(Person *per, char *newName);

void showWelcomeMessage();
