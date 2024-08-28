const prompt = require("prompt-sync")();
let a = prompt("Enter A:");
let b = prompt("Enter B:");
let c;
let x = parseInt(a);
let y = parseInt(b);
c = x + y;
console.log("In app.js : ", c);
module.exports = c;