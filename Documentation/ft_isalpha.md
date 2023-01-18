# ft\_is\_alpha
## Sintaxis y explicación
### Prototipo
```c
int	ft_is_alpha(int c);
```
### Descripción
ft\_is\_alpha comprueba que el entero 'c' sea casteable a unsigned char y que ese unsigned char sea un caracter alphabetico, para eso hace uso de la tabla ascii.
## Retorno
Devuelve 1 si el entero 'c' está dentro de los valores de un unsigned char y su valor en la tabla ascii es el de un caracter alfabetico (de la 'a' a la 'z' sin pasar por la 'ñ') (todos los caracteres alphanumericos se encuentran o bien en el rango de 65 a 90 o el rango de 97 a 122)
