# 🔐 DSA Hash Cracking Challenge: Attackers vs Defenders

## 🧠 Overview

Welcome to the **Hash Cracking Game**, an educational exercise in C++ and data structures! In this project, students are divided into two roles:

- **🛡️ Defenders**: Design and implement a hashtable that protects a secret value.
- **🎯 Attackers**: Try to retrieve the secret value by inferring the hash function and its weaknesses.

This challenge teaches practical concepts of hashing, collision handling, and reverse engineering.

---

## 🎮 Game Rules

### 🛡️ Defender Responsibilities

- Implement a `Hashtable<int, std::string>` in your `defender_setup.cpp`.
- The hashtable must store a **secret value** under a hidden key (e.g., `table.put(1, "s3cr3tPass")`).
- The hash function must remain private to the defender.
- You may reveal only the **HKey** (i.e., the hashed index) of a *decoy* value, not the actual key or the secret.

### 🎯 Attacker Responsibilities

- Implement a function in `attacker_setup.cpp` that attempts to discover the secret value.
- You can only make **10 calls** to `table.get(<key>)`.
- Random guessing is discouraged — you should infer hash behavior based on patterns or known values.
- Your goal is to return the correct value stored at the secret key, not the key itself.

---

## ⚙️ Build & Run Instructions

```bash
# Clone the repo and enter the project folder
cd DSA_L11

# Create and navigate to the build directory
mkdir build && cd build

# Generate the build configuration
cmake ..

# Compile the code
cmake --build .

# Run the compiled executable
./DSA_L11
```

## 📦 Example Execution Output

```bash
🛡️ [START] Defender is setting up the hashtable...
📦 [INFO] Defender has set up the table.
🎯 [INFO] Attacker begins guessing...

[ATTACKER] Attempt 1: Trying key 3
[FAIL] Key 3 not found in the table.
--------
[ATTACKER] Attempt 2: Trying key 11
[ATTACKER] Found key 11 with value: s3cr3tPass
[SUCCESS] Attacker found the secret pass: s3cr3tPass

✅ [INFO] Round finished. Awaiting next duel...
```

## 🧪 Submissions

Each team must submit:
- attacker_setup.cpp
- defender_setup.cpp

Place your files in your team-specific folder. The organizer can switch teams or run all teams in sequence.

---

Have fun defending and cracking! 🧠🔓
