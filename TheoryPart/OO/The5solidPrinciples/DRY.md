# Don't repeat yourself 

Avoid duplicate code by abstracting out , things  are common & place these things in single location.
(point it with function to do the reuasbility principle )

Duplication is wasteful and makes a codebase unnecessarily larger and more complex. This makes maintenance more difficult. When code that has been duplicated needs to be changed, modifications are required in multiple locations. If the changes
applied everywhere are not consistent, defects may be introduced. Software architects and developers should avoid duplication whenever possible.

## Copy-and-paste programming

In poorly written codebases, code duplication often results from copy-and-paste programming. This happens when a developer needs the exact same or very similar logic,which exists somewhere else in the system, so they duplicate (copy and paste) the code.This violates the DRY principle and lowers the quality of the code.Copy-and-paste programming can sometimes be acceptable and serve a useful purpose.Code snippets, which are small blocks of reusable code, may speed up development. Many
IDEs and text editors provide snippet management to make the use of snippets easier for developers. However, beyond the appropriate application of snippets, it is usually not a good idea to copy and paste your application code in multiple places.


## Magic strings

Magic strings are strings that appear directly in your code. Sometimes, these strings are needed in multiple places and are duplicated, violating the DRY principle. Maintenance of these strings can become a nightmare because if you want to change the value of the string,
you have to change it in multiple places. The problem is exacerbated when the string is used, not just in multiple places within the same class, but within multiple classes.


## How to avoid duplication

Duplication in logic can be eliminated by abstraction. This concept is referred to as the
abstraction principle (or the principle of abstraction). The principle is consistent with the
DRY principle and is a way to reduce duplication.


Once the logic is centralized, if it needs to be modified in the future, perhaps to fix a defect or to enhance it in some way, you will be able to make the
changes in a single location.


## Don't make things overly DRY

When attempting to follow the DRY principle, be careful not to consolidate disparate items
that just happen to be duplicates in some way. If two or more things are duplicates, it may
be that they are just coincidentally repetitive.
For example, if two constants have the same value, that does not mean they should be
combined into one constant for the sake of eliminating duplication. If the constants
represent distinct concepts, they should remain separate.
