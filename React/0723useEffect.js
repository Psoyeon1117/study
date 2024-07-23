import Button from "./Button";
import styles from "./App.module.css";
import { useState, useEffect } from "react";

function App() {
  const [counter, setCounter] = useState(0);
  const [keyword, setKeyword] = useState("");
  const onClick = () => {setCounter((current)=>current+1)};
  const onChange = (event) => {setKeyword(event.target.value)};

  const counterChange = () => console.log("run only counter change");

  console.log("i run all the time");  //계속 실행된다.

  useEffect(()=>{           //코드를 한 번만 실행한다.
    console.log("run only once");
  }, []);
  useEffect(counterChange , [counter]);          //counter에 변화가 있을 때, 코드를 실행한다. 

  useEffect(()=>{           //counter와 keyword에 변화가 있을 때, 코드를 실행한다.
    console.log("run only counter&keyword change");
  }, [counter, keyword]);

  return (
    <div>
      <input type="text" placeholder="seach" onChange={onChange} value={keyword}></input>
      <h1 className={styles.app}>{counter}</h1>
      <h2 className={styles.app}>Welcome my page!</h2>
      <Button text={"click"} onClick={onClick}/>
      </div>
  );
}

export default App;
//Button은 button태그만 있는 파일이다.
