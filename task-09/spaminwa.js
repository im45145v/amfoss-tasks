var message = prompt("what u wanna spam enter here", "‎");
var counter = parseInt(prompt("How many Times u want to spam ?", 10));
window.InputEvent = window.Event || window.InputEvent;
var event = new InputEvent("input", { bubbles: true });
var textbox = document.getElementsByClassName("_3FRCZ")[1];
for (let index = 0; index < counter; index++) {
  textbox.innerHTML = message;
  textbox.dispatchEvent(event);
  document.getElementsByClassName("_1U1xa")[0].click();
}
