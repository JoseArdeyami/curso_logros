#Escribe un programa que solicite al usuario una edad y verifique:
#Si la persona tiene entre 18 y 65 años usando los operadores and y or.
#Si la persona no es menor de edad usando el operador not.
num1 = int(input("Ingresa tu edad: "))

a1 = (num1 >= 18) and (num1 <= 65)
a2 = (num1 > 18) or (num1 < 65)
a3 = (not (num1 >= 18))

print("Tiene entre 18 y 65", a1)
print("Es mayor de 65 años", a2)
print("Es mayor de edad", a3)
