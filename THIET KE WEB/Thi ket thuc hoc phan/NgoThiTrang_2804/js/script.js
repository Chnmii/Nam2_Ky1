/* Cau 3 */
/* Ho ten: Ngô Thị Trang
   Ngay sinh: 28-04-2002
*/

function validate(){
	var check_price = /[0-9]/;
	var check_to = /[0-9]/;

	var key = document.getElementById("key").value;
	var from = document.getElementById("from").value;
	var to = document.getElementById("to").value;

	if(key == '' || from == '' || to == ''){
		alert("Ban khong duoc bo trong\nNgay sinh: 28/04")
	}

	if(!check_price.test(from)){
		alert("Gia phai la mot so\nNgay sinh: 28/04")
	}

	if(!check_to.test(to)){
		alert("Phai la mot so\nNgay sinh: 28/04")
	}
}
document.getElementById("submit").onclick = function() {validate()};