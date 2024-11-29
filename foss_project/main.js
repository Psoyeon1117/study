import express from "express";

const app = express();
const PORT = 5500;
app.set("view engine", "pug");  //view engine으로 pug를 사용하겠다 선언

//"/" home
//"/country" 나라 리스트를 보여주는 페이지
//"/animal" 동물 리스트를 보여주는 페이지