import express from "express";
import { home, country } from "./control.js";
const app = express();
const PORT = 5500;
app.set("view engine", "pug");  //view engine으로 pug를 사용하겠다 선언
app.set("views", process.cwd() + "/src/views");	//pug폴더 위치 지정


app.get("/", home);	//"/" home
app.get("/country", country);	//"/country" 나라 리스트를 보여주는 페이지
//get(”route”, callback func)은 “route”에 get request가 왔을 때 콜백함수로 대응한다.

app.listen(PORT, ()=>console.log("server 5500"));