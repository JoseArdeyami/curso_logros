const miInput = document.getElementById("miInput");
const mensajeDinamico = document.getElementById("mensajeDinamico");

miInput.addEventListener("input", function() {
    const textoIngresado = miInput.value;
    mensajeDinamico.textContent = "Has ingresado: " + textoIngresado;
});