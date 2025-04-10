# C - Sorting Algorithms & Big O

## 📚 Description

Ce projet fait partie du cursus **Low-level programming** et se concentre sur la mise en œuvre de différents **algorithmes de tri** en langage **C**.  
L'objectif est de comprendre leur fonctionnement, de les coder, et d'analyser leur **complexité algorithmique** à l'aide de la notation **Big O**.

---

## 🧠 Concepts abordés

- Algorithmes de tri classiques
- Notation Big O (complexité temporelle & spatiale)
- Manipulation de tableaux
- Optimisation de code
- Compréhension de la récursivité (ex: merge sort, quick sort)

---

## 🛠️ Contenu du projet

| Fichier/Rep | Description |
|-------------|-------------|
| `sort.h`    | Fichier d’en-tête contenant les prototypes |
| `0-bubble_sort.c` | Implémentation du **tri à bulles** |
| `1-insertion_sort_list.c` | **Tri par insertion** sur liste doublement chaînée |
| `2-selection_sort.c` | Implémentation du **tri par sélection** |
| `3-quick_sort.c` | Implémentation du **tri rapide (quick sort)** |
| `print_array.c` | Fonction utilitaire pour afficher un tableau |
| `print_list.c` | Fonction utilitaire pour afficher une liste chaînée |
| `README.md` | Ce fichier 😄 |

---

## 🔍 Complexité des algorithmes

| Algorithme       | Meilleur cas | Pire cas | Complexité moyenne | Type |
|------------------|--------------|----------|---------------------|------|
| Bubble Sort      | O(n)         | O(n²)    | O(n²)               | Échange |
| Insertion Sort   | O(n)         | O(n²)    | O(n²)               | Insertion |
| Selection Sort   | O(n²)        | O(n²)    | O(n²)               | Sélection |
| Quick Sort       | O(n log n)   | O(n²)    | O(n log n)          | Diviser pour régner |

---

## ✅ Objectifs pédagogiques

- Savoir choisir l’algorithme de tri le plus adapté à un problème.
- Comprendre comment la **taille de l’entrée (n)** influence la performance.
- Visualiser la différence entre des algos **efficaces** et **inefficaces**.
- Travailler sur des **listes chaînées** et des **tableaux** en C.

---

## 🧪 Exécution & tests

```bash
gcc -Wall -Wextra -Werror -pedantic *.c -o sorter
./sorter

🧠 Astuce pour réviser la complexité
O(1) < O(log n) < O(n) < O(n log n) < O(n²) < O(2ⁿ) < O(n!)

🖋️ Auteurs
Projet inspiré du cursus Holberton School réalisé par Angela RHIN et Lucas BLANCPORTIER.