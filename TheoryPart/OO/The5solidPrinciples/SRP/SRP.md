# Single Responsibility Principle

A module should deal with one and only one actor .
## Why 

We Use it to keep the functiolities of our code consistent and don't violete each other by changing one thing related to one actor , don't affect other actors work.

> Software systems are changed to satisfy users and stakeholders; those users and **stakeholders are the “reason to change”** that the principle is talking about. Indeed, we can rephrase the principle to say this:
**A module should be responsible to one, and only one, user or stakeholder.**

-Unfortunately, the words “user” and “stakeholder” aren’t really the right
words to use here. There will likely be more than one user or stakeholder
who wants the system changed in the same way. Instead, we’re really referring to a group—one or more people who require that change. We’ll refer to that group as an actor.Thus the final version of  the SRP is:
**A module should be responsible to one, and only one, actor.**

---

## What module stands for 

Now, what do we mean by the word “module”? The simplest definition is just
a **source file**. Most of  the time that definition works fine. Some languages and development environments, though, don’t use source files to contain their code. In those cases a module is just a cohesive set of  functions and data structures.


---


## Problem violate the principle

The Employee class from a payroll application -> It has
three methods: calculatePay(), reportHours(), and save().

it violates SRP because: 

- The calculatePay() method is specified by the accounting department,
which reports to the CFO.
- The reportHours() method is specified and used by the human resources
department, which reports to the COO.
- The save() method is specified by the database administrators (DBAs),
who report to the CTO.

So we specify one class to 3 different actors.
This coupling can cause the actions of  the CFO’s team to affect something that the COO’s team depends on.

For example, suppose that the calculatePay() function and the
reportHours() function share a common algorithm for calculating non-
overtime hours. Suppose also that the developers, who are careful not to
duplicate code, put that algorithm into a function named regularHours()

Now suppose that the CFO’s team decides that the way non-overtime hours
are calculated needs to be tweaked. In contrast, the COO’s team in HR does
not want that particular tweak because they use non-overtime hours for a
different purpose. briefly your code make a miss of this thing , it will affect the COO's team who don't want to change their method, the will be livid.

> These problems occur because we put
code that different actors depend on into close proximity. The SRP says to
separate the code that different actors depend on.


## Solutions 

Perhaps the most obvious way to solve the problem is to separate the data
from the functions. The three classes share access to EmployeeData, which is
a simple data structure with no methods. Each class holds only
the source code necessary for its particular function. The three classes are not allowed to know about each other. Thus any accidental duplication is
avoided. 


The downside of  this solution is that the developers now have three classes
that they have to instantiate and track. A common solution to this dilemma is
to use the Facade pattern(design pattern )

The EmployeeFacade contains very little code. It is responsible for
instantiating and delegating to the classes with the functions.

Some developers prefer to keep the most important business rules closer to
the data. This can be done by keeping the most important method in the
original Employee class and then using that class as a Facade for the lesser
functions

(Interface way of thinking )



> The Single Responsibility Principle is about functions and classes—but it reappears in a different form at two more levels. At the level of  components,it becomes the Common Closure Principle. At the architectural level, it becomes the Axis of  Change responsible for the creation of  Architectural Boundaries.


- Important Video reference -> [SRP](https://www.youtube.com/watch?v=-T0H--a8WnY&list=PLTCrU9sGybupCpY20eked6blbHI4zZ55k&index=5)
