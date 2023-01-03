# Introduction to Solid Principles

> Good software systems begin with clean code. On the one hand, if  the bricks aren’t well made, the architecture of  the building doesn’t matter much. On the other hand, you can make a substantial mess with well-made bricks. This is where the SOLID principles come in.

## Why Solid Principles

The SOLID principles tell us how to arrange our functions and data
structures into classes, and how those classes should be interconnected.


- Why do you want to make as few and as little changes as possible to existing code?
First of all, there is the risk of one of those changes breaking the entire system. Then there is the amount of time you need to invest for each change in an existing class—to understand what it originally does, and where best to add or remove some lines of code. But there is also the extra burden in modifying the existing unit tests for the class.
Besides, each change may be part of some review process. It may require a rebuild of the entire system, or it may even require others to update their systems to reflect the changes.

- **The SOLID principles apply to those groupings.not only classes**
  
## Goal of Solid Principles

- Tolerate change 
- Are easy to understand , and 
- Are the basis components that can be used in many software systems.

## When We apply Them 

They are applied just above the level of  the code and help to define the kinds of  software structures used within modules and components.



## Executive Summary of The 5 Solid Principles

### SRP

 each software module has one, and only one, reason
to change.

### OCP 

The gist is that for software systems to be easy to change, they must be designed to allow the behavior of  those systems to be changed by adding new code, rather than changing existing code.


### LSP

 In short, this principle says that to build software systems from interchangeable parts, those parts must adhere to a contract that allows those parts to be substituted one for another.

### ISP

This principle advises software designers to avoid depending on things that
they don’t use.

### DIP

The code that implements high-level policy should not depend on the code
that implements low-level details. Rather, details should depend on policies.

