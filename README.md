# C++ Learning Modules

Welcome to my C++ learning journey! This repository contains exercises and projects from CPP00 through CPP09, covering fundamental to advanced C++ concepts.

## 📚 Module Overview

### CPP00 - Namespaces, Classes, Member Functions, stdio streams, Initialization Lists, Static, Const
- **ex00**: Megaphone - Introduction to C++ basics
- **ex01**: PhoneBook - Classes, objects, and member functions
- **ex02**: Account Class - Static members and logging

### CPP01 - Memory Allocation, Pointers to Members, References, Switch Statement
- **ex00**: BraiiiiiiinnnzzzZ - Dynamic allocation and zombie management
- **ex01**: Moar Brainz! - Arrays of objects
- **ex02**: HI THIS IS BRAIN - Pointers vs references
- **ex03**: Unnecessary Violence - References and objects
- **ex04**: Sed is for Losers - File manipulation and string replacement
- **ex05**: Harl 2.0 - Function pointers
- **ex06**: Harl Filter - Switch statements and filtering

### CPP02 - Ad-hoc Polymorphism, Operator Overloading, Orthodox Canonical Class Form
- **ex00**: My First Class in Orthodox Canonical Form - Basic class structure
- **ex01**: Towards a More Useful Fixed-Point Number Class - Operator overloading
- **ex02**: Now We're Talking - Arithmetic and comparison operators
- **ex03**: BSP (Binary Space Partitioning) - Point-in-triangle algorithm

### CPP03 - Inheritance
- **ex00**: Aaaaand... OPEN! - Base class ClapTrap
- **ex01**: Serena, my Love! - Inheritance with ScavTrap
- **ex02**: Repetitive Work - Multiple inheritance with FragTrap
- **ex03**: Now It's Weird! - Diamond problem and virtual inheritance

### CPP04 - Subtype Polymorphism, Abstract Classes, Interfaces
- **ex00**: Polymorphism - Virtual functions and basic inheritance
- **ex01**: I Don't Want to Set the World on Fire - Deep copy and memory management
- **ex02**: Abstract Class - Pure virtual functions
- **ex03**: Interface & Recap - Interfaces and materia system

### CPP05 - Repetition and Exceptions
- **ex00**: Mommy, When I Grow Up, I Want to be a Bureaucrat! - Exception handling basics
- **ex01**: Form up, Maggots! - Custom exceptions and form validation
- **ex02**: No, You Need Form 28B, not 28C... - Concrete form implementations
- **ex03**: At Least This Beats Coffee-Making - Intern class and form creation

### CPP06 - C++ Casts
- **ex00**: Conversion of Scalar Types - Static cast and type conversion
- **ex01**: Serialization - Reinterpret cast and data serialization
- **ex02**: Identify Real Type - Dynamic cast and RTTI

### CPP07 - C++ Templates
- **ex00**: Start With a Few Functions - Function templates
- **ex01**: Iter - Template functions with iterators
- **ex02**: Array - Class templates and containers

### CPP08 - Templated Containers, Iterators, Algorithms
- **ex00**: Easy Find - STL algorithms and containers
- **ex01**: Span - Custom container implementation
- **ex02**: Mutated Abomination - Advanced container operations

### CPP09 - STL
- **ex00**: Bitcoin Exchange - File parsing and map containers
- **ex01**: Reverse Polish Notation - Stack implementation
- **ex02**: PmergeMe - Advanced sorting algorithms and performance comparison

## 🛠️ Build Instructions

Each exercise contains its own Makefile. To compile any exercise:

```bash
cd CPP[XX]/ex[XX]
make
```

To clean compiled files:
```bash
make clean    # Remove object files
make fclean   # Remove object files and executables
make re       # Clean and rebuild
```

## 🔧 Requirements

- **Compiler**: g++ or clang++
- **C++ Standard**: C++98 or later
- **Make**: GNU Make
- **OS**: Linux/macOS/Windows with appropriate toolchain

## 🎯 Learning Goals

This repository demonstrates proficiency in:

- **Object-Oriented Programming**: Classes, inheritance, polymorphism
- **Memory Management**: Dynamic allocation, RAII, smart pointers
- **Advanced C++ Features**: Templates, STL, exceptions, casting
- **Best Practices**: Orthodox Canonical Form, const correctness, SOLID principles
- **Algorithm Implementation**: Sorting, searching, data structures

## 📝 Notes

- All code follows C++98 standard where specified
- Emphasis on proper memory management and exception safety
- Implementation of Orthodox Canonical Class Form for resource management
- Extensive use of STL containers and algorithms in later modules

## 🚀 Getting Started

1. Clone the repository
2. Navigate to any exercise directory
3. Run `make` to compile
4. Execute the resulting binary
5. Check the source code for implementation details

## 📖 Additional Resources

- [C++ Reference](https://en.cppreference.com/)
- [ISO C++ Guidelines](https://isocpp.github.io/CppCoreGuidelines/)
- [Effective C++ by Scott Meyers](https://www.aristeia.com/books.html)

---

*This project is part of the 42 School curriculum for learning modern C++ programming.*
