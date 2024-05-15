const text = document.getElementById("myInput");

text.addEventListener("input", () => {
    text.value = text.value.toUpperCase()
});