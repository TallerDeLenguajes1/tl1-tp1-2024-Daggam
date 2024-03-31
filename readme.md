# Investigación del archivo .gitignore
_En esta investigación se va a tratar de responder los siguientes 3 interrogantes._

- ¿Por qué es conveniente incluirlo?
- ¿Cuándo se debe hacer?
- ¿Cómo configuraría el archivo?

## ¿Qué es el archivo .gitignore?
Cuando tenemos desarrollamos una aplicación e integremos un control de versiones, existirá casos donde no queremos que ciertos archivos o rutas no sean guardadas. Esto puede deberse a distintas razones.

Una de las principales razones es para **optimizar**. Podríamos tener una aplicación que requiera de muchas _(demasiadas)_ librerías con sus respectivas dependencias, entonces esto haría que nuestra aplicación tenga un peso considerable. 
Con **.gitignore** tenemos la posibilidad de hacer que no se incluyan estas librerías/dependencias a nuestro código y agregar una lista que contenga el nombre de todo lo necesario para que el proyecto que vayan a descargar sea funcional.

Este es uno de los tantos usos que se le puede dar.

Podemos hacer esto creando un archivo de texto ```.gitignore``` en la ruta principal de nuestro proyecto.

Este es un ejemplo de como se vería un .gitignore.

```
# Este es un comentario.

# Ponemos un archivo que queremos ignorar y se encuentra en la ruta principal del proyecto.
ignorar.txt

# Esto es para ignorar a todos los archivos que terminen en .txt de mi ruta principal.
*.txt

# Y este es para ignorar un archivo que se encuentra en una carpeta.

miCarpeta/maquina.txt
```

El .gitignore no se limita a solo esto, se pueden crear de manera local como global en un repositorio.
Para más információn sobre los archivos git, visitar su [Documentación](https://git-scm.com/docs/gitignore).

## En conclusión...

**.gitignore** es un archivo de texto que especifica que rutas/archivos van a ser ignorados por git. No serán tomados en cuenta los cambios que se realicen en los archivos listados.

