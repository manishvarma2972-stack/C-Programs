# C-Programs &bull; Core Computational & Algorithmic Problem Solving

[![Language: C](https://img.shields.io/badge/Language-C-A8B9CC?style=flat-square&logo=c&logoColor=black)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Compiler: GCC / Clang](https://img.shields.io/badge/Compiler-GCC%20%2F%20Clang-blue?style=flat-square&logo=gnu)](https://gcc.gnu.org/)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg?style=flat-square)](LICENSE)

A structured collection of foundational C programming implementations focused on algorithmic problem-solving, number theory, arithmetic series, mathematical logic, and procedural control structures.

---

## 📚 Program Catalog

| Program File | Description | Mathematical / Algorithmic Concept | Complexity |
| :--- | :--- | :--- | :--- |
| `even_numbers_up_to_n.c` | Computes and displays all even numbers up to $N$. | Modulo arithmetic & conditional stepping | $\mathcal{O}(N)$ |
| `n_even_numbers.c` | Generates the first $N$ consecutive even integers. | Arithmetic progression ($2k$) | $\mathcal{O}(N)$ |
| `n_even_numbers_v2.c` | Alternative step-skipping generator for $N$ evens. | Loop increment optimization ($i \mathrel{+}= 2$) | $\mathcal{O}(N)$ |
| `odd_numbers_up_to_n.c` | Computes and displays all odd integers up to $N$. | Parity checking | $\mathcal{O}(N)$ |
| `n_odd_numbers.c` | Generates the first $N$ consecutive odd integers. | Arithmetic progression ($2k - 1$) | $\mathcal{O}(N)$ |
| `n_odd_numbers_v2.c` | Optimized step-skipping generator for $N$ odds. | Direct step addition | $\mathcal{O}(N)$ |
| `natural_numbers_up_to_n.c` | Outputs natural numbers sequence $1 \dots N$. | Direct iteration | $\mathcal{O}(N)$ |
| `max_of_two.c` | Determines the maximum of two values. | Binary conditional branch | $\mathcal{O}(1)$ |
| `max_of_two_v2.c` | Evaluates maximum using ternary expressions. | Conditional operator optimization | $\mathcal{O}(1)$ |
| `max_of_three.c` | Evaluates maximum of three numeric inputs. | Multi-way nested selection | $\mathcal{O}(1)$ |
| `multiples_of_7.c` | Filters and displays multiples of 7 up to $N$. | Divisibility testing ($n \pmod 7 == 0$) | $\mathcal{O}(N)$ |
| `multiplication_table.c` | Generates complete multiplication grid for $N$. | Iterative scalar multiplication | $\mathcal{O}(1)$ |
| `n_power_n.c` | Evaluates exponential value $N^N$. | Iterative exponentiation | $\mathcal{O}(N)$ |
| `n_power_n_up_to_n.c` | Computes self-power series $1^1, 2^2, \dots, N^N$. | Nested accumulation | $\mathcal{O}(N^2)$ |
| `n_terms_in_n_power_n_series.c` | Computes $K$ terms in exponential series. | Exponent accumulation | $\mathcal{O}(K^2)$ |
| `square_series_upto_n.c` | Generates square values up to $N$ ($1, 4, 9, \dots$). | Quadratic expansion ($k^2 \le N$) | $\mathcal{O}(\sqrt{N})$ |
| `n_terms_in_square_series.c` | Generates the first $N$ perfect squares. | Quadratic progression | $\mathcal{O}(N)$ |
| `sum.c` | Accumulates sum of values up to $N$. | Linear summation | $\mathcal{O}(N)$ |
| `product.c` | Computes cumulative product / factorial logic. | Multiplicative accumulation | $\mathcal{O}(N)$ |
| `sum_and_product.c` | Joint single-pass computation of sum and product. | Single-pass dual accumulator | $\mathcal{O}(N)$ |

---

## 🛠️ Compilation & Execution

Compile any source file using `gcc` or `clang` with strict diagnostic flags:

```bash
# Compile with warnings enabled
gcc -Wall -Wextra -O2 filename.c -o program

# Execute
./program
```

### Example: Running `sum_and_product.c`
```bash
gcc -Wall -O2 sum_and_product.c -o sum_and_product
./sum_and_product
```

---

## 📄 License

This repository is licensed under the [MIT License](LICENSE).
