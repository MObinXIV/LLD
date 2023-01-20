# Open Closed Principle

A software artifact should be **open for extension (inheritance , polymorphism ..etc)** but **closed for modification (don't modify or edit the class).**

---

## Why 

- Clearly, if  simple extensions to the requirements force massive changes to the software, then the architects of  that software system have
engaged in a spectacular failure.


- So what this principle wants to say is: We should be able to add new functionality without touching the existing code for the class. This is because whenever we modify the existing code, we are taking the risk of creating potential bugs. So we should avoid touching the tested and reliable (mostly) production code if possible.



## Summary 

**Instead of changing code, we have to extend the old code to change it with new code**


**But how are we going to add new functionality without touching the class, you may ask. It is usually done with the help of interfaces and abstract classes.**


The OCP is one of  the driving forces behind the architecture of  systems. The goal is to make the system easy to extend without incurring a high
impact of  change. This goal is accomplished by partitioning the system into components, and arranging those components into a dependency hierarchy that protects higher-level components from changes in lower-level
component.