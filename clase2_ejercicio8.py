#Escribe un programa que solicite un numero del usuario y determine si es positivo, negativo o cero
num = int(input("¿Que numero quieres comprobar si es positivo, negativo o cero?"))
if num > 0:
    print("Tu numero es positivo")
elif num == 0:
    print("Tu numero es 0")
elif num < 0:
    print("Tu numero es negativo")
else:
    print("Opcion invalida")