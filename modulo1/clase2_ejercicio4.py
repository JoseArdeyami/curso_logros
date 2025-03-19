num1 = int(input("Ingresa el primer numero: "))
num2 = int(input("Ingresa el segundo numero: "))
num3 = int(input("Ingresa el tercer numero: "))

mayor = num1
mayor = (num2 > mayor) * num2 + (not (num2 > mayor)) * mayor
mayor = (num3 > mayor) * num3 + (not (num3 > mayor)) * mayor

menor = num1
menor = (num2 < menor) * num2 + (not (num2 < menor)) * menor
menor = (num3 < menor) * num3 + (not (num3 < menor)) * menor

print("El numero mayor es:", mayor)
print("El numero menor es:", menor)
