# Abstraction

 Abstraction means displaying only essential information and hiding the details. Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation.(api idea)

## Advantages of Data Abstraction(Why)

- Helps the user to avoid writing the low-level code
- Avoids code duplication and increases reusability.
- Can change the internal implementation of the class independently without affecting the user.
- Helps to increase the security of an application or program as only important details are provided to the user.
- It reduces the complexity as well as the redundancy of the code, therefore increasing the readability.

---


- Abstraction -> hiding the internal implementation(method,feature) and only showing functionality to the user. User for example don't need to know how the backend of the facebook login work 
- Achieved through -> Abstract class & interface (Abstract class ,also hahahaha)
- The abstract class -> have the prototype of all methods , ممكن تعتبره ال uml من غير كود فانكشنز بس 
- can't intilize object

## Types :

1. Data abstraction –> This type only shows the **required information about the data and hides the unnecessary data.**
2. Control Abstraction –> This type only shows the **required information about the implementation and hides unnecessary information.**


## Abstraction using Classes

We can implement Abstraction in C++ using classes. The class helps us to group data members and member functions using available access specifiers. A Class can decide which data member will be visible to the outside world and which is not.

## Abstraction in Header files

One more type of abstraction in C++ can be header files. For example, consider the pow() method present in math.h header file. Whenever we need to calculate the power of a number, we simply call the function pow() present in the math.h header file and pass the numbers as arguments without knowing the underlying algorithm according to which the function is actually calculating the power of numbers.


