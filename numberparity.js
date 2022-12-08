function numclassif () {
    let quantity = prompt("Insert a number");

    if (quantity%2 == 0){
        alert(`${quantity} is an even number!`);
    } else {
        alert(`${quantity} is an odd number`);
    }
}

object.onclick = numclassif();
