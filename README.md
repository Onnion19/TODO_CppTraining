# TODO_CppTraining
## Como participar: 

- Deberas **clonar** el proyecto en tu ordenador, hacer una **branch** y a partir de aquí desarrollar la solución al problema 
- Una vez tengas la solución deberás subir tu Branch al GitHub y crear una **pull request**. 

- Si nunca has usado una versión de control: https://docs.github.com/en/desktop (también encontraras muchos tutoriales por internet)



## Soluciones 

- Cada vez que salga un ejercicio nuevo se puede abrir debate en el discord del [ToDo](https://discord.gg/2HNQVcf88c) . 
- Al cabo de una semana de que se abra un ejercicio se publicaran las posibles soluciones al github. 
- Además todas las contribuciones serán evaluadas y comentadas. 



## Como generar el proyecto:

Hay un script automatizado para Windows + Visual Studio 2019, teneis que abrir una consola de comandos en el root del proyecto y ejecutar el script: 

```
.\thirdparty\Premake\premake5.exe vs2019
```

Una vez ejecutado el script, encontrareis vuestro proyecto en la misma carpeta con el nombre de: `TodoCppTraining.sln`

### Y si no uso visual studio? 

No hay nada automatizado para otros IDE, así que lo mejor que podeis hacer es crear un proyecto de C++ con vuestro IDE y añadir los ficheros manualmente. 