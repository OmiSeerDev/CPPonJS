const input = document.querySelector('#num1');
const parity = document.querySelector('#form');
const result = document.querySelector('#result');

function numclassif (event) {
  // input.value = parseInt(input.value);
    if (input.value %2 == 0){
        result.innerText = `${input.value} is an even number!`;
    } else if (input.value %2 != 0){
        result.innerText = `${input.value} is an odd number!`;
    } else {
        input.value = NaN;
        return "Input error"
    }
    console.log(event);
    event.preventDefault();
}
    
    setTimeout(
        parity.addEventListener('submit',numclassif),500
        )