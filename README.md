# C++
These are programs I uploaded to get an understanding of data structures and algorithms. <hr>
I had to practice these to avoid misconceptions and gain experience to be able to solve more problems.


<h2>C++ High Frequnecy Topics</h2>

When it comes to C++, there are several high-frequency topics that are important to understand thoroughly. Here are some key topics:

1. Object-Oriented Programming (OOP):
Understanding the principles of OOP is crucial in C++. This includes concepts such as classes, objects, inheritance, polymorphism, and encapsulation. Make sure you are comfortable with creating classes, defining member functions and variables, and utilizing inheritance and polymorphism.

2. Templates:
Templates allow you to write generic code in C++. This feature enables the creation of functions and classes that can work with different data types. Familiarize yourself with template syntax, template functions, template classes, and template specialization.

3. Standard Template Library (STL):
The STL is a powerful library that provides generic algorithms, containers, and iterators. It includes important components such as vectors, lists, maps, algorithms like sorting and searching, and utility classes like iterators and functors. Have a solid understanding of the different STL containers and algorithms and know when and how to use them effectively.

4. Memory Management:
C++ provides manual memory management capabilities, and it's essential to understand concepts such as stack vs. heap memory allocation, dynamic memory allocation with `new` and `delete`, memory leaks, and smart pointers (e.g., `std::shared_ptr` and `std::unique_ptr`). Additionally, be familiar with the concept of RAII (Resource Acquisition Is Initialization) and how it helps manage resources efficiently.

5. Exception Handling:
Exception handling allows you to handle and recover from runtime errors. Learn how to use `try`, `catch`, and `throw` statements effectively to handle exceptions in your code. Understand exception safety guarantees and best practices for exception handling.

6. Multithreading and Concurrency:
C++ provides support for multithreading and concurrent programming through the `<thread>` library and synchronization primitives like mutexes, condition variables, and atomic operations. Learn how to create and manage threads, handle synchronization and data sharing between threads, and understand common concurrency issues such as data races and deadlock.

7. Move Semantics and Rvalue References:
Move semantics and rvalue references introduced in C++11 enable more efficient resource management and reduce unnecessary copying. Familiarize yourself with move constructors, move assignment operators, and perfect forwarding. Understand the benefits and appropriate usage of move semantics.

8. Modern C++ Features:
Stay updated with modern C++ features introduced in recent language standards (C++11, C++14, C++17, C++20). This includes features like lambda expressions, range-based for loops, auto type inference, constexpr, structured bindings, and more. Understand how these features improve code readability, expressiveness, and performance.

It's worth noting that the above topics represent a subset of essential areas in C++. To excel in interviews and professional C++ development, it's crucial to have a comprehensive understanding of the language, its idioms, and best practices. Additionally, understanding memory management, performance optimization, and debugging techniques will further strengthen your skills as a C++ developer.
# C++ Memory
In C++, memory is divided into two parts `Stack` and `Queue`
## Stack
Variables created at compile time are stored in the Stack.<br>
A Stack has a fixed size determined by the computer we are using.<br>
When the variable is no longer used, the Stack is released and freed to be used. <br>
Function Arguments are stored on the Stack. <br>
The return location is also stored on the Stack. <hr>
## Heap
The memory not used by the OS or programs is called Heap. <br>
This space can be used for dynamic variable creation. <br>
The `new` operator is used to allocate memory dynamically. <br>
This returns the address of the space stored in a pointer. <br>
The `delete` operator is used to release the memory created using the `new` operator. <br>

