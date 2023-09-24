# ft\_atoi
## Sintaxis y explicación
### Prototipo
```c
int ft_atoi(char *str)
```
### Descripción
ft\_atoi convierte la cadena de caracteres terminada en null 'str' en un int.

### Retorno
Devuelve el entero representado en 'str' como un int.
Para realizar esto convierte el caracter de cada caracter en el número que representa y suma sus valores relativos (numero representado * 10^((Longitud - 1)-Indice))
Cabe resaltar que ft\_atoi es compatible completamente con números positivos y negativos, puedes poner + antes del primer digito para decir que es positivo (por defecto, no hace falta hacerlo pero si se puede hacer) o - para decir que es negativo.
Ft\_atoi acepta que haya un número arbitrario de espacios (ft\_isspace) tanto al principio como al final
### Ejemplo
Para el string "1234\0" devuelve el int 1234.
Para el string "-1234\0" devuelve el int -1234.
Para el string "+1234\0" devuelve el int 1234.
