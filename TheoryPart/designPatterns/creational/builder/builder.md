# Builder

Separate the construction of a complex object from its representation so that the same construction process can create different representations.

- We Use it whenever we build -> **complex object** which has a **lots of configurations**.

- It solves the problem of complex constructors & telescope constructor.


## Pros  & cons 

Pros

- Good way to handle complexity
- easy to implement
- can be refactored into


cons

- class instances returned is immutable , so we can't make any changes to them.
- uses inner static class
- sometimes number of lines can be huge.