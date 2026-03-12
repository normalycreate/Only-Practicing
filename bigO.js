class contohBigO {
    static dapatkanElemenPertama(arr) {
        return arr[0];
    }
}

let angka = [23,45,67,89,99];
let hasil = contohBigO.dapatkanElemenPertama(angka);
console.log("Elemen pertama adalah " + hasil);