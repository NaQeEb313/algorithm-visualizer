

---

# 🔁 Backtracking Algorithm Visualizer

A **two-phase backtracking visualization system** that cleanly separates **algorithm execution** from **visual animation**.

* **C++ (main.cpp)** generates a detailed execution trace (`steps.log`)
* **Browser (p5.js)** replays those steps interactively

This design keeps the algorithm **fast**, **clean**, and **easy to understand**, while making visualization flexible.

---

## ✨ Key Features

* Visualizes **backtracking recursion flow**
* Supports multiple algorithms:

  * Binary generation
  * Subsets
  * Combinations
  * Permutations
* Clear visualization of:

  * Call stack (recursion depth)
  * Current recursion path
  * Outputs (current + previous 2)
  * Time-complexity trend graph
* Smooth, controllable animations in browser
* Input can be provided via **file or terminal**

---

## 🧠 Architecture Overview

```
C++ Algorithm Engine
        │
        ▼
   steps.log   (execution trace)
        │
        ▼
Browser Visualizer (p5.js)
```

* C++ handles **logic & speed**
* Browser handles **animation & interaction**
* No performance loss due to rendering

---

## 📂 Project Structure

```
.
├── main.cpp        # Backtracking algorithms (C++)
├── algo.exe        # Compiled executable (Windows)
├── input.txt       # User input file
├── steps.log       # Generated execution steps
├── index.html      # Browser visualizer
└── README.md
```

---

## ⚙️ Supported Algorithms

| Algorithm     | Description                      |
| ------------- | -------------------------------- |
| `binary`      | Binary string generation         |
| `subset`      | All subsets of a set             |
| `combination` | k-combinations (k fixed in code) |
| `permutation` | All permutations of a set        |

---

## 🚀 How to Run (Exact Steps)

### 1️⃣ Compile the C++ Code

Open **PowerShell / Terminal** in the project folder:

```bash
g++ main.cpp -o algo.exe
```

---

### 2️⃣ Create the Input File (`input.txt`)

This project is designed to work cleanly with **file-based input**.

Create a file named **`input.txt`**.

#### Example: Binary (length = 3)

```
binary
3
```

#### Example: Subset

```
subset
1 2 3
```

#### Example: Combination

```
combination
1 2 3 4
```

#### Example: Permutation

```
permutation
1 2 3
```

---

### 3️⃣ Run Using PowerShell (Recommended)

```powershell
gc input.txt | .\algo.exe
```

✔ Uses standard input (`cin`)
✔ Automatically generates `steps.log`
✔ No manual typing needed

---

### 🔹 Alternative (CMD / Git Bash / Linux / macOS)

```bash
algo.exe < input.txt
```

---

## 🌐 Visualize in Browser (Live)

The browser **cannot directly read files** without a server.

### 4️⃣ Start a Local Server

#### Option A: Python (if available)

```bash
python -m http.server
```

or

```bash
python3 -m http.server
```

---

#### Option B: VS Code (Recommended for Students)

1. Open the folder in **VS Code**
2. Install **Live Server** extension
3. Right-click `index.html`
4. Click **“Open with Live Server”**

---

### 5️⃣ Open the Visualizer

```
http://localhost:8000/index.html
```

> 📌 `steps.log` and `index.html` **must be in the same folder**

---

## 🎮 Browser Controls

| Key   | Action       |
| ----- | ------------ |
| Space | Play / Pause |
| `+`   | Speed up     |
| `-`   | Slow down    |

---

## ⏱️ Speed Control (Important)

### 🔹 C++ Side

* No delay by default
* Controlled via:

  ```cpp
  constexpr int VISUAL_DELAY_MS = 0;
  ```
* Recommended: **keep it 0**

### 🔹 Browser Side

* Step speed controlled by:

  ```js
  let frameDelay = 45;
  ```
* Animation smoothness:

  ```js
  const OUTPUT_LERP = 0.05;
  ```

> **Best practice:**
> Generate logs fast in C++, control speed in browser.

---

## 📏 Maximum Input Size (Important)

Backtracking is **exponential**, so limits are intentional.

### ✅ Recommended (With Visualization)

```
Input size ≈ 8–12
```

### 📊 Algorithm-wise Visual Limits

| Algorithm       | Max Input |
| --------------- | --------- |
| Binary / Subset | 10–12     |
| Combination     | 8–10      |
| Permutation     | 7–8       |

### ⚠️ Without Visualization (C++ only)

```
Binary / Subset: up to 25–30
Permutation: up to 10–11
```

---

## ❌ Common Mistakes

* Opening `index.html` by double-clicking (won’t load `steps.log`)
* Forgetting to run `algo.exe` before browser
* Using very large inputs (millions of steps)
* Adding delay in C++ for large inputs

---

## 🎓 Educational Purpose

This project helps understand:

* Recursion
* Backtracking
* Call stack behavior
* Exponential time complexity
* Separation of concerns

Ideal for:

* College projects
* Viva / presentations
* Algorithm learning

---

## 🔮 Future Enhancements

* Recursion tree visualization
* Fast-forward / skip steps
* Step-by-step manual mode
* Zoom & pan support
* Export visualization as video/GIF
* Support for more algorithms (N-Queens, Sudoku, etc.)

---

## 🧠 Design Philosophy

> **Compute fast. Visualize separately.**

The algorithm never slows down for animation.
The browser handles all timing and interaction.

---

## 📜 License

Free for **educational and personal use**.

---


