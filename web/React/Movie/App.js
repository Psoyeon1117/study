import { useState, useEffect } from "react";
import { BrowserRouter as Router, Routes, Route } from "react-router-dom";
import Home from "./routes/home";
import Detail from "./routes/Detail";
function App() {
  return (
    <Router>
      <Routes> {/*사용자의 요청과 일치하는 하나의 Route만을 렌더링한다.*/}
        <Route path="/" element={<Home />}></Route>
        <Route path="/movie/:id" element={<Detail />}></Route> {/*:으로 뒤에 오는 값을 동적으로 구현할 수 있음*/}
      </Routes>
    </Router>
  );
}

export default App;
