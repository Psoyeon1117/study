import Movies from "../components/movies";
import { useState, useEffect } from "react";
import style from "./home.module.css";

function Home() {
  const [loading, setLoading] = useState(true);
  const [movies, setMovies] = useState([]);
  const response = async () => {
    const json = await (
      await fetch(
        `https://yts.mx/api/v2/list_movies.json?minimum_rating=9.0&sort_by=year`
      )
    ).json();
    setMovies(json.data.movies);
    setLoading(false);
  };
  useEffect(() => {
    response();
  }, []);
  return (
    <div className={style.main}>
      <div className={style.nav}>Select movie!</div>
      <div className={style.home}>
        {loading ? (
          <h1>Loading</h1>
        ) : (
          movies.map((movie) => (
            <Movies
              key={movie.id}
              id={movie.id}
              coverImg={movie.medium_cover_image}
              title={movie.title}
              summary={movie.summary}
              genres={movie.genres}
            />
          ))
        )}
      </div>
    </div>
  );
}
export default Home;
