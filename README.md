# geeksforgeeks_codes
This repository serves as a collection of my solutions to various GeeksforGeeks Data Structures and Algorithms (DSA) problems, organized by the level of difficulty. - Created using [GfG To GitHub](https://github.com/AtharvaNanavate/GfG-To-GitHub)
# 🌿 GeeksforGeeks — Auto Synced DSA Solutions 🚀

Welcome to my **GeeksforGeeks Solutions Repository!**  
All the problems you see here are **automatically uploaded** using the **GfG to GitHub Chrome Extension**, right after I solve them on [GeeksforGeeks](https://www.geeksforgeeks.org/).  
No manual uploads — just pure automation 💚⚙️  

---

## ✨ About This Repository

This repo is a **collection of Data Structures and Algorithms problems** that I’ve solved while practicing on GeeksforGeeks.  
Each file corresponds to a problem, organized neatly by difficulty and topic.

> 💡 Every solution here was **written, tested, and submitted successfully** on GfG — then automatically pushed to GitHub using the “GfG to GitHub” extension.

---

## 🧠 What You'll Find Here

📁 **Structured Folders**  
- `Easy/` → Beginner-friendly problems  
- `Medium/` → Moderate challenges  
- `Hard/` → Advanced DSA problems  

📝 **Clean, Well-Commented Code**  
- Each file includes the **problem statement**, **approach**, and **solution code**.  

🚀 **Auto Sync Feature**  
- Whenever I solve a new problem on GfG, it’s instantly pushed here — no manual commits!  

---

## 🛠️ Tech Stack

| Platform | Purpose |
|-----------|----------|
| 🧩 **GeeksforGeeks** | DSA problem-solving and submissions |
| 🐙 **GitHub** | Version control and portfolio showcase |
| ⚙️ **GfG to GitHub Extension** | Automatic solution upload |

---

## 📊 Progress Tracker

| Level | Problems Solved |
|--------|-----------------|
| 🌱 Easy | XX |
| 🌿 Medium | XX |
| 🌵 Hard | XX |

*(Updated automatically as I solve more!)*  

---

## 🧩 Example Problem
```cpp
// Problem: Two Sum
// Link: https://practice.geeksforgeeks.org/problems/two-sum-1452/1
// Difficulty: Easy

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (mp.count(complement))
                return {mp[complement], i};
            mp[nums[i]] = i;
        }
        return {};
    }
};
