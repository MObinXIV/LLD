# Class Diagram 

Class diagram is the backbone of object-oriented modeling - it shows how different entities (people, things, and data) relate to each other. In other words, it shows the static structures of the system.
## The purpose of the class diagram can be summarized as:

1. Analysis and design of the static view of an application;
2. To describe the responsibilities of a system;
3. To provide a base for component and deployment diagrams; and,
4. Forward and reverse engineering.

[wholeArticle](https://www.educative.io/courses/grokking-the-object-oriented-design-interview/g7Lw3O0A2Aj)

## These are the different types of relationships between classes

- **Association** -> If two classes in a model need to communicate with each other, there must be a link between them. This link can be represented by an association. Associations can be represented in a class diagram by a line between these classes with an arrow indicating the navigation direction.

By default, associations are always assumed to be bi-directional; this means that both classes are aware of each other and their relationship. In the diagram below, the association between Pilot and FlightInstance is bi-directional, as both classes know each other
By contrast, in a uni-directional association, two classes are related - but only one class knows that the relationship exists. In the below example, only Flight class knows about Aircraft; hence it is a uni-directional association

- **Multiplicity** ->indicates how many instances of a class participate in the relationship.**It is a constraint that specifies the range of permitted cardinalities between two classes.**

- **Aggregation**: Aggregation is a special type of association used to model a **“whole to its parts”** relationship. In a basic aggregation relationship, **the lifecycle of a PART class is independent of the WHOLE class’s lifecycle.** In other words, aggregation implies a relationship where the child can exist independently of the parent. In the above diagram, Aircraft can exist without Airline.

- **Composition**: The composition aggregation relationship is just another form of the aggregation relationship, but **the child class’s instance lifecycle is dependent on the parent class’s instance lifecycle**. In other words, Composition implies a relationship where the child cannot exist independent of the parent. In the above example, WeeklySchedule is composed in Flight which means when Flight lifecycle ends, WeeklySchedule automatically gets destroyed.
- **Generalization**: Generalization is the mechanism for combining similar classes of objects into a single, more general class. Generalization identifies commonalities among a set of entities. In the above diagram, Crew, Pilot, and Admin, all are Person.
- **Dependency**: A dependency relationship is a relationship in which one class, the client, uses or depends on another class, the supplier. In the above diagram, FlightReservation depends on Payment.
- **Abstract class**: An abstract class is identified by specifying its name in italics. In the above diagram, both Person and Account classes are abstract classes.

## The symbols of relations 

![img](classSigns.png)



## Example 

![img](class.png)
