const nuevoElementoTexto = document.getElementById("nuevoElementoTexto");
const agregarElemento = document.getElementById("agregarElemento");
const miLista = document.getElementById("miLista");

agregarElemento.addEventListener("click", function() {
    const texto = nuevoElementoTexto.value;

    if (texto.trim() !== "") {
        const nuevoElemento = document.createElement("li");
        nuevoElemento.textContent = texto;
        miLista.appendChild(nuevoElemento);
        nuevoElementoTexto.value = "";
    }
});