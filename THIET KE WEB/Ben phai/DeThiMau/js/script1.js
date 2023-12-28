/* cau 3 */
function songuyen(value){
    return (Number.isInteger(value) && value > 0);
}
function validate()
{
	var valid = 0;

	var check_email = /^([a-zA-Z0-9_\.\-])+\@(([a-zA-Z0-9\-])+\.)+([a-zA-Z0-9]{2,4})+$/; 
	var check_rating = /[0-9]/;
	
	var comment = document.getElementById("com").value;
	var email = document.getElementById("email").value;
	var rating = document.getElementById("rate").value;

 // 		if( document.myForm.Name.value == "" ) {
 //            alert( "Please provide your name!" );
 //            document.myForm.Name.focus() ;
 //            return false;
 //    		}

	if(comment == '' || email == '' || rating == ''){
		alert("Ban hay dien day du");
	}

	if(!check_email.test(email)){
		alert("Email chua dung");
	}
	else{
		++valid;
	}
	
	if(!check_rating.test(rating)){
		alert("Rating chua dung")
	}
	else
		++valid;

	if (valid == 2){
		alert("Cam on y kien dong gop cua ban")
	}
}

document.getElementById("submit").onclick = function() {validate()};