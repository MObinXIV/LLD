# Keep it simple stupid 

KISS is a term created in the 1960’s which was meant to reflect the approach of creating simple durable aircrafts that could be repaired easily in an emergency. This idea has since been adopted by many branches of science and engineering.

Simple in this context doesn’t necessarily mean easy, It simply means producing the same results or a better result with less effort or complexity.

Simple, in the context of the KISS principle, means systems with lesser parts and, more importantly, fewer interconnected parts. Applications must have simple coding and mustn’t comprise of avoidable, interlinked parts.


- Some clean code with comments , no globals, const or function name express behavior ... blablabla

## Implementing the KISS Principle in Software Development

The KISS Principle can be followed by adhering to a list of DON’T’s as mentioned below:

### Avoid Global Functions or Elements 

Globals give rise to significant problems such as Global name collisions, low testability, and concurrency issues. Furthermore, Globals add to the overall complexity of the code. They often act as hidden elements whose change of states is undeterminable to the developers, let alone co-developers or others.

### Avoid the Lasagna Architecture 

The Lasagna Architecture is the outcome of a very strict layering approach wherein each layer only knows about the layer immediately below itself. Rather than actualizing the intended ‘perfect’ system, this approach often leads to an unnecessarily complex one.

Such a system is immensely complex to read, and making any changes to it is difficult. For even the slightest of change, the developer has to check most sections of the code, determine if the change in one layer would affect another, visualize the functioning of multiple layers, face unidentifiable errors in verification, and so on.

### Avoid Abstractions and Dependencies 

 call things with proper names

### Avoid Dead Code 

A habit among developers is to include lines of code that have no present purpose but are intended to be useful in the future. These are dead codes. By making systems unnecessarily complicated, they do more harm to the system than good.

Unless a line of code has any immediate purpose, it’s always advisable not to use it.

### Avoid Flaunting 

It’s often alluring for developers to flaunt their skills and to do things in ways unique to them, to make applications unnecessarily complicated. Although this might sound trivial in the context of this blog, it’s a significant factor deterring people from achieving the KISS principle in software development.

---

## Why ?

> KISS Principle used in developing an application with simple backend and frontend code has several advantages. It fosters collaboration as other people on the team can easily understand the original code, enabling successors to work fluently on an existing application.KISS principles in software development allow developers to tackle the most significant difficulty of software development – implementing changes to the existing code.

1. First, KISS principles make it easier for the developer to visualize the various aspects of the applications, mentally mapping the possible effects of any change. This involves knowing the dependencies, states, and more.

2. Second, once the changes are made, with the KISS principle it easier to test a simple system than an extremely complex one. Moreover, simpler processes allow for greater efficiency in automated testing.

3. Third, with the KISS principle, an application that has simpler requirements on the part of the developer and involves simpler components is ultimately more likely to be simple to use for the end-user.

