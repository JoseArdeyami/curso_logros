num1 = int(input("Ingresa el primer numero: "))
num2 = int(input("Ingresa el segundo numero: "))

a1 = (num1 >= 0) and (num2 >= 0)
a2 = (num1 >= 0) or (num2 >= 0)
a3 = (not (num1 < 0))

print("Ambos numeros son positivos", a1)
print("Al menos un numero positivo", a2)
print("El primer numero no es negativo", a3)
