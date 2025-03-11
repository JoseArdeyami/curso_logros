#Ejercicio 1: Escribe un programa que solicite una calificación numérica del usuario y determine el grado según la siguiente escala:
#90-100: A
#80-89: B
#70-79: C
#60-69: D
#0-59: F
nota = int(input("¿Que numero sacaste en tu calificacion?"))

if nota >= 90 and nota <= 100:
    print("Tu nota es A")
elif nota >= 80 and nota <= 89:
    print("Tu nota es B")
elif nota >= 70 and nota <= 79:
    print("Tu nota es C")
elif nota >= 60 and nota <= 69:
    print("Tu nota es D")
elif nota >= 0 and nota <= 59:
    print("Tu nota es F")
else:
    print("Nota no valida")
