//IMPORTAÇÕES
const express = require("express");
const porta = 3000

//CORPO / req = requerimento / res = resposta
const raiz = (req, res) =>{
    res.send("Back-end Ativo");
}

//CONFIGURAR O HTTP
const app = express();
app.get("/", raiz);

//Teste no console
app.listen(3000, ()=>{
    console.log("Respondendo na porta:", porta);
})
