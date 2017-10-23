#include <Person.h>

int main(int argc, char *argv[]) {
  Person *profPopeye = Person_new("Professor Popeye", 40);

  profPopeye->setAge(profPopeye, 42); //He aged
  profPopeye->setName(profPopeye, "Great Professor Popeye"); //Stronger than ever

  profPopeye->printPerson(profPopeye);

  //Time too free the memory
  profPopeye->delete(profPopeye);

  return 0;
}
