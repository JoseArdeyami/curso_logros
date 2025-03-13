cesta = []

def agregar_elemento():
    elemento = input("Ingresa el nombre del elemento a agregar: ")
    precio = float(input(f"Ingresa el precio entero de '{elemento}': "))
    cesta.append({"nombre": elemento, "precio": precio})
    print(f"'{elemento}' ha sido agregado a la cesta con un precio de ${precio}.")

def mostrar_cesta():
    if not cesta:
        print("La cesta está vacía.")
    else:
        print("Contenido de la cesta:")
        for compra in cesta:
            print(f"- {compra['nombre']} ${compra['precio']}")

def eliminar_elemento():
    if not cesta:
        print("La cesta está vacía. No hay elementos para eliminar.")
        return

    elemento = input("Ingresa el nombre del elemento a eliminar: ")
    for compra in cesta:
        if compra["nombre"] == elemento:
            cesta.remove(compra)
            print(f"'{elemento}' ha sido eliminado de la cesta.")
            return
    print(f"'{elemento}' no se encuentra en la cesta.")

def calcular_total():
    total = sum(compra["precio"] for compra in cesta)
    print(f"El total de la compra es: ${total}")

inicio = int(input("¡Bienvenido a la tienda!\n Quiere empezar su compra?\n 1-Si\n 2-No"))

while inicio == 1:
    print("\nOpciones:")
    print("1. Agregar un nuevo elemento")
    print("2. Mostrar el contenido de la cesta")
    print("3. Eliminar un elemento")
    print("4. Calcular el total")
    print("5. Salir")

    opcion = input("Ingresa el número de la opción deseada: ")

    if opcion == "1":
        agregar_elemento()
    elif opcion == "2":
        mostrar_cesta()
    elif opcion == "3":
        eliminar_elemento()
    elif opcion == "4":
        calcular_total()
    elif opcion == "5":
        print("¡Gracias por usar la cesta de la compra!")
        break
    else:
        print("Opción inválida. Intenta de nuevo.")
else:
    print("¡Vuelva pronto!")
