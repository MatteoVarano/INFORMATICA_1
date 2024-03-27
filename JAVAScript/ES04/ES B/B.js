alert("inserire un numero con almeno 2 cifre");
numero = parseInt(prompt("quanti numeri desideri inserire"))

if(Number.isNaN(numero)){
  alert("numero inserito non valido")
}

inverti(numero)

function inverti(num){
    
    let reversed = 0;
    while (num !== 0) {
        
        let digit = num % 10;
      
        reversed = reversed * 10 + digit;
      
        num = parseInt(num / 10);
      }  

      console.log(reversed);

}