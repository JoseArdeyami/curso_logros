using System;

public class CalcularAreaTriangulo
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Ingresa la base del triangulo:");
        double baset = Convert.ToDouble(Console.ReadLine());

        Console.WriteLine("Ingresa la altura del triangulo:");
        double altura = Convert.ToDouble(Console.ReadLine());

        double area = (baset * altura) / 2;

        Console.WriteLine($"El area del triangulo es: {area}");
    }
}

using System;

public class CelsiusAFahrenheit
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Ingresa la temperatura en grados Celsius:");
        double c = Convert.ToDouble(Console.ReadLine());

        double f = (c * 9 / 5) + 32;

        Console.WriteLine($"La temperatura en grados Fahrenheit es: {f}");
    }
}

public class Promedio
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Sacaremos el promedio de 3 numeros!\nIndique el primer numero:");
        double num1 = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("Segundo numero:");
        double num2 = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("Tercer numero:");
        double num3 = Convert.ToDouble(Console.ReadLine());

        double resultado = (num1 + num2 + num3) / 3;

        Console.WriteLine($"El promedio es: {resultado}");
    }
}
public class Division
{
    public static void Main(string[] args)
    {
        Console.WriteLine("¡Division!\nIndique el numero a dividir:");
        double num1 = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("Indique el numero divisor:");
        double num2 = Convert.ToDouble(Console.ReadLine());

        double resultado = num1 / num2;

        Console.WriteLine($"El resultado es: {resultado}");
    }
}
public class Suma
{
    public static void Main(string[] args)
    {
        Console.WriteLine("¡Suma!\nIndique el primer numero a sumar:");
        double num1 = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("Indique el segundo numero a sumar:");
        double num2 = Convert.ToDouble(Console.ReadLine());

        double resultado = num1 + num2;

        Console.WriteLine($"El resultado es: {resultado}");
    }
}
public class Resta
{
    public static void Main(string[] args)
    {
        Console.WriteLine("¡Resta!\nIndique el numero a restar:");
        double num1 = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("Indique el numero resta:");
        double num2 = Convert.ToDouble(Console.ReadLine());

        double resultado = num1 - num2;

        Console.WriteLine($"El resultado es: {resultado}");
    }
}
