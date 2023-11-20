# ft\_memdup
## Sintaxis y explicación
### Prototipo
```c
void	*ft_memdup(const void *mem, size_t len)
```
### Descripción
ft\_memdup duplica _len_ bytes de _mem_ en una dirección de memoria nueva reservada con malloc(2)
la nueva memoria reservada tendrá un tamaño de _len_ bytes que corresponderán en contenido con los primeros _len_ bytes de _mem_
### Retorno
la dirección de memoria cuyo contenido es una copia de los primeros _len_ bytes de _mem_
