function validInput()
{
  let validate = true;

  var umbrella = document.getElementById("umbrella").value;
  var boot = document.getElementById("boot").value;
  var coat = document.getElementById("coat").value;

 

  //checking if quantity less than 0 
  if(Number(umbrella) < 0 )
  {
    validate = false;
  }
  if(Number(boot) < 0 )
  {
    validate = false;
  }
  if(Number(coat) < 0 )
  {
    validate = false;
  }
  //checking if quantity is blanked
  if(umbrella == "" )
  {
    validate = false;
  }
  if(boot == "") 
  {
    validate = false;
  }
  if(coat == "" )
  {
    validate = false;
  }


  if(validate == false)
  {
    if(umbrella < 0)
    alert("Please pick a positive quantity for the umbrella. Please enter 0 or more into the box");
    if(boot < 0)
    alert("Please pick a positive quantity for the boots. Please enter 0 or more into the box");
    if(coat < 0)
    alert("Please pick a positive quantity for the coat. Please enter 0 or more into the box");


    // if(umbrella == "")
    // alert("Your quantity for the unbrella is blanked. Please enter 0 or more into the box");
    // if(boot == "")
    // alert("Your quantity for the boots is blanked. Please enter 0 or more into the box");
    // if(coat == "")
    // alert("Your quantity for the coat is blanked. Please enter 0 or more into the box");
  }
  return validate;


}