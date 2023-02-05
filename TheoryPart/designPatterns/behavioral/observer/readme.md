# Observer 

Define a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically.

## Why 

it's used when we have something wanna notify group of things 


## The situations U apply it 

1. When an abstraction has two aspects, one dependent on the other. Encapsulating these aspects in separate objects lets you vary and reuse them independently.
2. When change one object requires changing others, and U don't know how many objects need to be changed.
3. when object should able to notify other objects , without making assumptions about who these objects are.In other words U don't want these objects tightly coupled.
