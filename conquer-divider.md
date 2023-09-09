<div align="center">

# Divide-and-conquer

</div>

| Etapa       | Descripción                                                                                                       |
|-------------|-------------------------------------------------------------------------------------------------------------------|
| **Divide**  | Dividir en subproblemas. (En Merge-sort: Dividir el arreglo de tamaño \( $n$ \) en 2 subsecuencias de tamaño \( $\frac{n}{2}$ \).)  |
| **Conquer** | Conquista los subproblemas resolviéndolos recursivamente. Resolver directamente si el tamaño es pequeño. (En Merge-sort: Ordenar las dos subsecuencias usando Merge-sort.) |
| **Combine** | Combinar las soluciones de los subproblemas en la solución del problema original (En Merge-sort: Mezclar las dos subsecuencias ordenadas)                               |


<div style="display: flex; justify-content: space-between;">
    <img src="./images/m_r.jpg" alt="merge-sort" width="45%">
    <img src="./images/m_r2.jpg" alt="merge-sort2" width="55%">
</div>

<div align = "center">

# Recurrences & Runing Time Analyze

</div>

$
\left\{ \begin{array}{l}
\text{Línea 1} \\
\text{Línea 2} \\
\text{Línea 3}
\end{array} \right\}
$
