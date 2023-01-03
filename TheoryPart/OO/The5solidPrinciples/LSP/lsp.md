# The Liskov substitution principle

-**If U have a function That accepts a class every single subclass  of that class must also enter that function & work properly**


## Why 

This principle exists to indicate how to inherite properly. 

your code might work & serve the requirements , but conceptually wrong.

---

## Rectangle , square example 

The way area calculated is not the same in 2 classes , so we can't inherit square from rectangle. to solve that we make an public class called shape , both shape inherits from 

---

## how the principle breaks

1. ask if the child class is really a type of parent class or really it's a parent class.
2. replace the instances of child class with then instances in parent class and see if it's violates 

