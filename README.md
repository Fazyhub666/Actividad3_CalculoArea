# CALCULOAREA

Programa en C++ que calcula el área de un círculo aplicando un enfoque modular y de diseño Top-Down.

## Descripción

El programa pide el radio de un círculo (en cm), valida que sea mayor a cero y calcula el área con la fórmula **A = π · r²** mediante una función propia, `calcularAreaCirculo`. Como bonus, dibuja en la consola una diana en ASCII cuyo tamaño depende del radio ingresado.

## Conceptos aplicados

- Diseño Top-Down y modularización con funciones
- Prototipo de función y retorno de valores
- Constante `const` para proteger el valor de π
- Validación de datos de entrada

## Estructura del proyecto

```
calculoarea/
├── .gitignore
├── LICENSE
├── README.md
├── docs/
│   └── InformeProyectoCALCULOAREA.pdf
├── src/
│   └── main.cpp
└── capturas/
    ├── compilacion_area.png
    └── diagrama_flujo.png
```

## Requisitos

- Compilador g++ (MinGW / MSYS2) o, en su defecto, OnlineGDB
- Visual Studio Code (opcional)

## Compilación y ejecución (PowerShell, Windows 10/11)

Desde la raíz del proyecto:

```
g++ src/main.cpp -o src/area.exe
.\src\area.exe
```

## Ejemplo de uso

```
=> Ingrese el radio del circulo/diana (en cm): 3
El area del circulo es: 28.2743 cm2.
```

Si se ingresa un radio menor o igual a 0, el programa muestra un mensaje de error y termina.

## Autor

[Nombre y Apellido]
E.E.S.T. N.º 1 "Eduardo Ader", Vicente López
Laboratorio de Programación (LPR), 5.º año, 2026
