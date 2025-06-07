# GFG-Paths-from-root-with-a-specified-sum
# 🌿 Root-to-Any Path Sum in Binary Tree

This project implements a recursive algorithm to find **all paths** in a binary tree where the sum of node values is equal to a **given target**. The path **can start from the root and end at any node**, not necessarily a leaf.

---

## 🧠 Approach

We use **DFS with backtracking** to explore every possible path from root to any node:

1. Traverse the tree and maintain:
   - A running sum (`tillnow`)
   - The current path (`small`)
2. If at any point the running sum equals the target, the current path is stored.
3. On returning from recursion, backtrack to remove the current node and explore other possibilities.

---

## ⏱️ Time and Space Complexity

- **Time Complexity:** `O(N)`  
  (Each node is visited once; in the worst case all paths are checked.)

- **Space Complexity:** `O(H)`  
  (Where `H` is the height of the tree due to recursion stack and temporary path vector.)

---

## ✍️ Author

**Ridham Garg**  
👨‍💻 Passionate Computer Engineer | Problem Solver | C++ Enthusiast  
🎓 Thapar University, Patiala  
📧 Always open to connect and collaborate!

---

🔍 Feel free to explore the logic and use it in your own projects! If you found this useful, give it a ⭐️
