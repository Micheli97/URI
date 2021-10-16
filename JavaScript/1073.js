var input = require('fs').readFileSync('/dev/stdin', 'utf8');
let x = parseInt(input.split('\n'))
let i = 2
for(i; i<=x; i+=2){
    if(i>1998) return
    let result = i * i
    console.log(`${i}^${2} = ${result}`)
}