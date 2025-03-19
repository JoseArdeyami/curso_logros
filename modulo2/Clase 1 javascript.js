let nombre = "Jose ";
let anio = 2025;
let clase = {programacion: "modulo2"};
let info = " tengo 25 años";
let edad = 25;
console.log(nombre + anio + clase + info + edad);

function verificar() {
if (edad < 40) {
    console.log("No tiene la mayoria de edad")
}
else if (edad >= 40 && edad <= 70) {
    console.log("Tiene la mayoria de edad")
}
else {
    console.log("Adulto mayor")
}}
verificar()
edad = 40
verificar()

let dia = 5;
let nombreDia;

switch (dia) {
    case 1:
        nombreDia = "Lunes";
        break;
    case 2:
        nombreDia = "Martes";
        break;
    case 3:
        nombreDia = "Miercoles";
        break;
    case 4:
        nombreDia = "Jueves";
        break;
    case 5:
        nombreDia = "Viernes";
        break;
    case 6:
        nombreDia = "Sabado";
        break;
    case 7:
        nombreDia = "Domingo";
        break;
    default:
        nombreDia = "Dia Invalido";
        break;
}
console.log(nombreDia);

let hora = prompt("¿Que hora es? ");
console.log("Nice");

// Ejercicio 1
// Escriba un promgrama que determine si un numero es par o impar

let num = prompt("¿Que numero comprobar si es par? ");

if (num % 2 === 0) {
    console.log("El numero " + num + " es par")
}
else {
    console.log("El numero " + num + " es impar")
}
// Fin del ejercicio 1
