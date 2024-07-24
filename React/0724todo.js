import styles from "./App.module.css";
import { useState, useEffect } from "react";

function App() {
  const [todo, setTodo] = useState("");
  const [todos, setTodos] = useState([]);

  const onChange = (event) => {
    setTodo(event.target.value);
  };
  const onSubmit = (event) => {
    //submit 전송 이벤트 발생 시
    event.preventDefault(); //화면 재구성을 막음
    if (todo == "") {
      return;
    }
    setTodos((currentArray) => [todo, ...currentArray]);  //새로운 todo를 todo리스트에 추가함
    //...은 배열을 풀어해치는 역할을 한다. 
    setTodo("");
  };
  const deleteClick = (index) => {
    setTodos(todos.filter((item, todoIndex) => todoIndex !== index));
    //삭제하고자 하는 todo를 index로 todo리스트에서 제거한다.
    //filter함수는 배열 중 (...)의 조건에 맞는 새로운 배열을 리턴한다. 
  };
  return (
    <div>
      <h1 className={styles.app}>My To Dos ({todos.length})</h1>
      <form onSubmit={onSubmit}>
        <input
          type="text"
          placeholder="Write your to do"
          value={todo}
          onChange={onChange}
        ></input>
        <button>Add to do</button>
      </form>
      <hr></hr>
      <ul className={styles.ul}>
        {todos.map((item, index) => (
          <li key={index} className={styles.list}>
            {item}
            <button onClick={() => deleteClick(index)}>delete</button>
          </li>
        ))}
      </ul>
    </div>
  );
}

export default App;
