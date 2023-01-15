# Libft
La libft es el primer proyecto de 42, se trata de crear una librería que vas a usar durante todo el cursus, para facilitar el uso de esa librería a nivel interno se crea la presente documentación.
## Funciones Incluidas en Libft
La libft incluye un set de funciones "obligatorias" del proyecto, estas está agrupadas en categorías para hacer mas facil la ampliación, los métodos (ordenados en sus categorías) son:
### Funciones Pseudo-Booleanas
Estas funciones son simples, sirven para comprobar algo, en realidad no son booleanas ya que C no soporta ese tipo de dato, por ese motivo usamos el tipo INT (Por estandar, si por mi fuera usaría un char) considerando true a cualquier número distinto de 0 y false al propio 0, estas funciones son:\
1. ft\_is\_alpha: Comprueba que 'c' pueda convertirse en un unsigned char sin perder datos y que al hacerlo el resultado sería un carácter alphabetico.
2. ft\_is\_digit: Comprueba que 'c' pueda convertirse en un unsigned char sin perder datos y que al hacerlo el resultado sea un caracter numético.
3. ft\_is\_alnum: Comprueba que si 1) p 2) son reales.