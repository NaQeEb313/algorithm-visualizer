# 🔍 Algorithm Visualizer (C++ + Python)

A step-by-step **visualization of backtracking algorithms** implemented in **C++** and visualized using a **Python-based UI** to demonstrate **recursion, stack behavior, and backtracking flow**.

---

## ✨ What this project shows

- How **recursion works internally**
- How the **call stack grows and shrinks**
- Why **backtracking returns** step by step
- Clear difference between **choose / output / backtrack**
- Real-time **animated execution flow**

This project is focused on **understanding**, not just solving.

---

## 🧠 Algorithms Visualized

- Binary String Generation  
- Subset Generation  
- Combination Generation  
- Permutation Generation  

All algorithms are written in **C++** using recursion and backtracking.

---

## 🛠️ Tech Stack

| Component | Technology |
|--------|------------|
| Algorithm Engine | C++ |
| Visualization | Python |
| Interface | Terminal (CLI) |
| Tools | VS Code, Git, GitHub |

---

## 📂 Project Structure

algorithm_visualizer/
├── main.cpp # C++ algorithm implementations
├── viewer.py # Python visualization (UI + animation)
├── input.txt # Input configuration
├── sample_output.txt # Sample generated output (optional)
├── README.md
├── LICENSE (MIT)
└── .gitignore


---

## ▶️ How to Run

### 1️⃣ Compile the C++ program
  ```bash
  g++ main.cpp -o main

### 2️⃣ Prepare input (input.txt)

  Example:

  subset
  1 2 3

  permutation
  1 2 3

  combination
  1 2 3

  binary
  3

### 3️⃣ Run with visualization
  Get-Content input.txt | .\main.exe | python viewer.py

🎨 Visualization Output (Example)

+ Choose 0
  + Choose 0
    => Output [0 0]
  - Backtrack 0
  + Choose 1
    => Output [0 1]
  - Backtrack 1
- Backtrack 0


+ → Recursive call (push to stack)

- → Backtracking (pop from stack)

=> → Valid output




📈 What you learn from this project



Practical understanding of recursion

How stack frames behave

Why backtracking algorithms are expensive

Difference between conceptual flow vs execution

Clean separation of logic and visualization



📌 Why this design?


C++ handles algorithm execution efficiently

Python simplifies visualization and UI

Separation of concerns keeps the project clean and extendable



🔓 License


This project is licensed under the MIT License — free to use, modify, and learn from.



👤 Author


Syed Naquib - (NaQeEb313)
Engineering Student | Learning Algorithms & Systems


---

