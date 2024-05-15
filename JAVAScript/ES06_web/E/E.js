const pass1 = document.getElementById("password1");
const pass2 = document.getElementById("password2");

pass2.addEventListener("change", () => {
    if(pass1.value!== pass2.value){
        alert("Le passwords non sono uguali");
    }    
});