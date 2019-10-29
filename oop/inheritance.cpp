#include <string>
#include <stdio.h>
#include <stdlib.h>

// virtual - allows for polymorphism through dynamic binding

class Dog {
private:
   char* name;
   int age;
public:
   Dog(char* _name, int _age) : name(_name), age(_age) {}
   inline char* getName() { return name; }
   inline int getAge() { return age; }
   virtual void bark() {
      printf("I'm %s(%d)!\n\r", name, age);
   }
   virtual int adoptPrice() {
      return 100;
   }
};

class Corgi : public Dog {
private:
   int price;
public:
   Corgi(char* _name, int _age, int _price) : Dog(_name, _age), price(_price) {}
   inline int getPrice() { return price; }
   virtual void bark() {
      printf("I'm corgi: %s(%d)!\n\r", Dog::getName(), Dog::getAge());
   }
   virtual int adoptPrice() {
      return price;
   }
   void showMoves() {
      printf("I am so cool!\n\r");
   }
};

int main() {
   Dog* dogs[3];
   dogs[0] = new Dog("Eren", 5);
   dogs[1] = new Dog("Mikasa", 6);
   dogs[2] = new Corgi("Levi", 7, 1000);

   dogs[0]->bark();
   printf("%d\n\r", dogs[0]->adoptPrice());
   //dogs[0]->showMoves();
   dogs[1]->bark();
   printf("%d\n\r", dogs[1]->adoptPrice());
   //dogs[1]->showMoves();
   dogs[2]->bark();
   printf("%d\n\r", dogs[2]->adoptPrice());
   ((Corgi*)dogs[2])->showMoves();

   for (int i = 0; i < 2; i++) {
      delete dogs[i];
   }
}