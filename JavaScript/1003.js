var input = require('fs').readFileSync('/dev/stdin', 'utf8')

var valores = input.split("\n")

var A = parseInt(valores.shift())
var B = parseInt(valores.shift())

var SOMA = A + B

console.log(`SOMA = ${SOMA}`)