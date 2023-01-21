# The Liskov substitution principle

If a class, S, is a subtype of a class, B, then S can be used to replace all instances of B without changing the behaviors of a program.


## Why 

This principle exists to indicate how to inherit properly.

your code might work & serve the requirements , but conceptually wrong.

---

## How to inherit properly according to LSP

1. see if the base should or shouldn't be inherited , U see if the subclass will add more features to the methods in the base class or not , if not don't inherit.
2. The subclass must act in the same behavior as the base class, for example if the base class sets an alarm for specific date , the subclass must do the same , but the result can be more precise by setting a specific hour as well.
3. Invariant conditions that exist in the base class, must also remain invariant in the subclass. Since invariant conditions are expected to be immutable, the subclass should not change them as it may cause a side effect in the behaviours of the base class or the program.
4. Immutable characteristics of a base class must not be changed by the subclass. Since classes can modify their own characteristics, a subclass can modify all the characteristics that it inherits from the base. However, the base class may encapsulate attributes that should be fixed values. These values are identifiable by observing whether or not they are changed in the program, or by a method in the base class. If it is not changed, then these attributes are considered immutable. Subclasses can get around this problem by declaring and modifying their own attributes. The attributes of a subclass are not visible to the base class and therefore, do not affect the behavior of the base class.

## Rectangle , square example 

The way area calculated is not the same in 2 classes , so we can't inherit square from rectangle. to solve that we make an public class called shape , both shape inherits from 

---

## how the principle breaks

1. ask if the child class is really a type of parent class or really it's a parent class.
2. replace the instances of child class with then instances in parent class and see if it's violates 

