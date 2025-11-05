# 🧮 MathLib

**MathLib** es una librería modular escrita en **C++17**, orientada a objetos, que implementa operaciones matemáticas básicas con matrices.  
El proyecto forma parte de la práctica 11 del curso **Programación Orientada a Objetos II**, en la **Universidad Nacional del Altiplano – Puno**.

---

## 🎯 Objetivos del proyecto

- Desarrollar una **librería reutilizable** en C++ que implemente operaciones matemáticas avanzadas.  
- Aplicar **principios de diseño modular y SOLID**.  
- Integrar el proyecto con **Git/GitHub** usando **versionado semántico (SemVer)**.  
- Documentar la librería para su futura distribución.

---

## 🧩 Estructura del proyecto

```
MathLib/
├── include/
│   └── mathlib/
│       └── Matrix.h          # Declaración de la clase Matrix
├── src/
│   └── Matrix.cpp            # Implementación de la clase Matrix
├── test/
│   └── test_matrix.cpp       # Programa de prueba de la librería
├── CMakeLists.txt            # Archivo de configuración del proyecto
└── README.md                 # Documentación principal
```

---

## ⚙️ Instalación y compilación

### 🔧 Requisitos previos
- Compilador C++17 (g++, clang++, o MSVC)
- CMake ≥ 3.10
- Git instalado

### 🧱 Compilación del proyecto

Ejecuta los siguientes comandos en tu terminal:

```bash
# Clonar el repositorio
git clone https://github.com/max7040/MathLib.git
cd MathLib

# Generar archivos de compilación
cmake -S . -B build

# Compilar el proyecto
cmake --build build

# Ejecutar el programa de prueba
./build/test/test_matrix
```

---

## 💻 Uso básico

Ejemplo del uso de la clase `Matrix`:

```cpp
#include "mathlib/Matrix.h"
#include <iostream>
using namespace mathlib;

int main() {
    Matrix A(2,2), B(2,2);
    A.set(0,0,1); A.set(0,1,2);
    A.set(1,0,3); A.set(1,1,4);

    B.set(0,0,5); B.set(0,1,6);
    B.set(1,0,7); B.set(1,1,8);

    Matrix C = A.add(B);
    Matrix D = A.multiply(B);

    std::cout << "Suma:\n";
    C.print();
    std::cout << "Multiplicación:\n";
    D.print();

    return 0;
}
```

📤 **Salida esperada:**
```
Suma:
6 8 
10 12 
Multiplicación:
19 22 
43 50
```

---

## 🧠 Conceptos aplicados

- **Librerías reutilizables:** separan la lógica de implementación (`src`) y definición (`include`).
- **Principios SOLID:** favorecen el bajo acoplamiento y la alta cohesión.
- **CMake:** facilita la compilación multiplataforma y el empaquetado modular.
- **SemVer (Versionado Semántico):**
  - `MAJOR` → cambios incompatibles.
  - `MINOR` → nuevas funciones compatibles.
  - `PATCH` → correcciones menores.

---

## 🧾 Documentación Doxygen

Para generar documentación técnica en HTML o PDF:

```bash
doxygen -g
# Editar el archivo Doxyfile:
# PROJECT_NAME = "MathLib"
# INPUT = include src
# RECURSIVE = YES
doxygen
```

📂 Los archivos generados estarán en la carpeta `html/` (abre `index.html` en tu navegador).

---

## 🏷️ Versionado

Este proyecto sigue el esquema **SemVer (Semantic Versioning)**.

| Versión | Descripción |
|----------|--------------|
| `v1.0.0` | Versión inicial estable de MathLib |

Para crear una nueva versión:
```bash
git tag -a v1.0.0 -m "Versión estable inicial de MathLib"
git push origin v1.0.0
```

---

## 👨‍💻 Autor

**Ali Máximo Huisa Quispe**  
Estudiante de Ingeniería de Sistemas  
Universidad Nacional del Altiplano – Puno  
📅 Noviembre, 2025

---

## 📜 Licencia

Este proyecto se distribuye bajo la licencia **MIT**, lo que permite su uso libre con atribución.

```
MIT License © 2025 Ali Máximo Huisa Quispe
```

---

## 📚 Referencias

- Hunt, A. & Thomas, D. (1999). *The Pragmatic Programmer.*
- Martin, R. C. (2025). *Clean Architecture.*
- Preston-Werner, T. (2013). *Semantic Versioning 2.0.0.*
- Chacon, S., & Straub, B. (2014). *Pro Git.*
