const todoInput = document.querySelector("#todo-input")
const todoList = document.querySelector(".todo-list")
const likeButton = document.querySelector(".like")

todoInput.addEventListener("keypress",function(e){
	if(e.keyCode === 13){
		generateTodo(todoInput.value)
		todoInput.value = ""
	}
})

const generateTodo = (todo)=>{
	const li = document.createElement("li")
	const likeSpan = generateLike();
	const itemSpan = generateItem(todo);
	const manageSpan = generateManage();
	li.appendChild(likeSpan);
	li.appendChild(itemSpan);
	li.appendChild(manageSpan);
	todoList.appendChild(li)
}
const generateIcon = (iconName)=>{
	const icon = document.createElement("i")
	icon.classList.add("material-icons")
	icon.classList.add(iconName)
	icon.innerText = iconName
	return icon
}
const generateLike = ()=>{
	const span = document.createElement("span")
	span.classList.add("todo-like")
	span.appendChild(generateIcon("favorite_border"));
	return span;
}
const generateItem = (todo)=>{
	const span = document.createElement("span")
	span.classList.add("todo-item")
	span.innerText = todo;
	return span;
}
const generateManage = ()=>{
	const span = document.createElement("span")
	span.classList.add("todo-manage")
	span.appendChild(generateIcon("check"));
	span.appendChild(generateIcon("clear"));
	return span;
}