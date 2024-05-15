const pass = document.getElementById("pass");

pass.addEventListener("change", () => {
    if(pass.value.length < 8){
        pass.style.backgroundColor = "red";
    }    
    else{
        pass.style.backgroundColor = "green";
    }
});