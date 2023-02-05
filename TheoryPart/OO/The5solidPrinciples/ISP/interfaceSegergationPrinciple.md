# Interface segregation principle (SRP for interfaces)


don't make a **fat interface**, instead separate the interface into multiple interfaces.

## Why

fat interface results in some classes which uses only few functions from the interface not all , so better to separate the interface into multiple interfaces for different reasons according to similarity


The principle states that **many client-specific interfaces are better than one general-purpose interface.**(as one interface maybe has functionalities doesn't applicable to one of the inherited classes) Clients should not be forced to implement a function they do no need.

- ex -> ATM machine better to seperate the deposit from withdrawl functionlities 

The lesson here is that depending on something that carries baggage that you don’t need can cause you troubles that you didn’t expect.

