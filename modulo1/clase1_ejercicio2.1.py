accion = int(input("Que accion desea hacer? Escoja un numero\n 1.Suma\n 2.Resta\n 3.Multiplicar\n 4.Dividir"))
num1 = int(input("Primer numero"))
num2 = int(input("Segundo numero"))

if accion == 1:
  resultado = num1 + num2
elif accion == 2:
  resultado = num1 - num2
elif accion == 3:
  resultado = num1 * num2
elif accion == 4:
  resultado = num1 / num2
else:
  resultado = "Opcion no valida"
 
print("Resultado:", resultado)
