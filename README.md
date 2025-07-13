# C++ Integrative Assignment

## 📄 Description

This is an Object-Oriented Programming (OOP) project in C++ that models geometric figures such as circles, triangles, and pentagons.  
The program calculates the **area** and **perimeter** of each figure, and displays their attributes using **inheritance**, **encapsulation**, and **polymorphism**.

---

## ✨ Features

- Object creation for Circle, Triangle, and Pentagon using OOP principles.
- Input validation for numeric and text fields.
- Calculation of area and perimeter for each figure.
- Dynamic color assignment to each object.
- Polymorphic method usage through a base abstract class.
- Logging system to track application behavior.

---

## 📁 File Structure

```plaintext
├── Circle.h / Circle.cpp # Circle class implementation
├── Figure.h / Figure.cpp # Abstract base class implementation
├── Logger.h / Logger.cpp # Logger utility for output formatting
├── main.cpp # Program entry point
├── Pentagon.h / Pentagon.cpp # Pentagon class implementation
├── README.md # This file
├── Triangle.h / Triangle.cpp # Triangle class implementation
```

---

## ⚙️ Requirements

- C++17 or later
- A C++ compiler (e.g., g++, clang++)

---

## 🛠️ Compilation & Execution

```bash
# Compile
g++ main.cpp Circle.cpp Triangle.cpp Pentagon.cpp Logger.cpp Figure.cpp -o figures

# Run
./figures
```

---

## 🧪 Example Usage

```plaintext
[0] Enter Circle object parameters
[0] Radius:
-5.5
[3127] Invalid input. Introduce a positive number:
0
[4931] Invalid input. Introduce a positive number:
5.5
[7310] Enter Triangle object parameters
[7311] Height:
4
[10018] Left side length:
5.66
[12121] Right side length:
4
[12997] Base length:
4
[13753] Enter Pentagon object parameters
[13753] Sides length:
1.5
[16356] Apothem:
1.03

[19011] Introduce Circle object color:
Red1
[22608] Invalid color. Introduce a color without numbers and special characters:
Red*
[25718] Invalid color. Introduce a color without numbers and special characters:
Red
[28203] Introduce Triangle object color:
Green
[31128] Introduce Pentagon object color:
Blue

[33761] RESULTS
[33761] Circle1 object
<A> [33761] 95.033400
<P> [33762] 34.557600
-> [33762] 5.500000 (radius)
-> [33763] Red (color)

[33764] Triangle1 object
<A> [33764] 8.000000
<P> [33764] 13.660000
-> [33765] 4.000000 (height)
-> [33765] 5.660000 (side1Length)
-> [33765] 4.000000 (side2Length)
-> [33766] 4.000000 (baseLength)
-> [33766] Green (color)

[33767] Pentagon1 object
<A> [33767] 3.862500
<P> [33767] 7.500000
-> [33767] 1.500000 (sidesLength)
-> [33768] 1.030000 (apothem)
-> [33768] Blue (color)
```
---

## 👨‍💻 Author

Created by Oscar Ortiz Torres – [oscar_ot09@outlook.es]