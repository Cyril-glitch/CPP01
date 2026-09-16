*This project has been created as part of the 42 curriculum by cycolonn.*

# 🧠 C++ Module 01 - Memory Allocation, Pointers to Members & References

## 📖 1. Description
**CPP01** covers dynamic allocation, stack vs heap lifetime, memory references, file stream manipulation, and member function pointers.

This project is divided into five exercises:

- `ex00` (`BraiiiiiiinnnzzzZ`) contrasts stack allocation with dynamic heap allocation (`new` / `delete`).
- `ex01` (`Moar brainz!`) focuses on allocating and clearing contiguous arrays of objects with `new[]` and `delete[]`.
- `ex02` (`HI THIS IS BRAIN`) demystifies memory addresses, pointers, and references.
- `ex03` (`Unnecessary violence`) explores pointer vs reference members and resource ownership inside classes.
- `ex04` (`Sed is for losers`) implements file stream manipulation and string replacement using `std::ifstream` and `std::ofstream`.
- `ex05` (`Harl 2.0`) introduces pointers to member functions to dispatch logic without repetitive `if/else` ladders.

---

<br />

## 🚀 2. Instructions

Navigate to any exercise directory (`ex00` to `ex05`) and use the standard Makefile targets:

| Target | Description |
| :--- | :--- |
| `make` | Compiles the project using `c++` with `-Wall -Wextra -Werror -std=c++98`. |
| `make it` | Compiles and executes the binary immediately. |
| `make val` | Runs the binary under `valgrind` to verify memory integrity. |
| `make clean` / `fclean` / `re` | Standard 42 cleaning and recompilation rules. |

### Executables

Each exercise produces its own binary under the `bin/` directory:

```bash
cd ex00 && ./bin/brainz
cd ex01 && ./bin/moarbrainz
cd ex02 && ./bin/this_is_brain
cd ex03 && ./bin/Human
cd ex04 && ./bin/sifl <filename> <s1> <s2>
cd ex05 && ./bin/Harl
```

### Useful commands

```bash
make
make re
make clean
make fclean
```

---

<br />

## 🛠️ 3. Technical Choices & Learning Objectives
Each exercise targets a specific aspect of resource management and language mechanics.

---

<br />

* 💾 **Stack vs Heap Allocation**: Clearly defined when an object should live inside its local scope versus when it requires manual dynamic management.
* 🔗 **References vs Pointers**: Enforced references when an object reference cannot be null and must not be reassigned; used pointers when an optional or mutable target is required.
* 📁 **File Streams**: Avoided C file descriptors (`open`, `read`, `write`) in favor of `std::fstream` and stream buffers.
* 🎯 **Pointers to Member Functions**: Implemented clean execution dispatching table patterns using the syntax `(this->*ptr)()`.
* ⚙️ **42 Compliance**: Fully compatible with C++98, ensuring zero leaks on dynamic allocations.

---

<br />

## 📚 4. Resources

* 📄 **Official Documentation**:
    * [C++ Reference - Dynamic Memory](https://en.cppreference.com/w/cpp/memory/new/operator_new) - Detailed behavior of `new` and `delete`.
    * [C++ Reference - File I/O](https://en.cppreference.com/w/cpp/io/basic_fstream) - Standard file stream management.
* 🔗 **Concepts & Tutorials**:
    * [Pointers vs References](https://www.learncpp.com/cpp-tutorial/references-vs-pointers/) - Core practical differences.
    * [Pointers to Member Functions](https://www.learncpp.com/cpp-tutorial/pointers-to-member-functions/) - Syntax and usage for dispatch tables.
